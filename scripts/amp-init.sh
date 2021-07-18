#!/bin/bash

BOARD=rpi # rpi, jetson-nano

i2c_write_read_check()
{
    local retry=0
    local i2c_retry_max=3
    # retry 3 times, log if it still fails
    while [ $((retry++)) -lt $i2c_retry_max ]
    do
        i2cset -y 1 $1 $2 $3    # write to i2c
        # read back to check
        local i2cread=$(i2cget -y 1 $1 $2)
        [ "$3" = "$i2cread" ] && return 0 || echo "i2c read failure, returned: $i2cread"
    done
    echo "i2c write failure: $1 $2 $3"
    return 1
}

i2c()
{
    # write if data ($3) is valid, otherwise read
    [ -n "$3" ] && i2c_write_read_check $1 $2 $3 || i2cget -y 1 $1 $2
}

expander() # pca9538
{
	i2c 0x70 $1 $2
}

amp1() # tda7802
{
	i2c 0x6c $1 $2
}

amp2() # fda802
{
	i2c 0x6e $1 $2
}

power_on()
{
	expander 0x03 0xc8
	expander 0x01 0x37
}

mixpath()
{
	case $BOARD in
		jetson-nano)
			CARD=tegrasndt210ref
			;;
		rpi)
			CARD=sndrpihifiberry
			;;
		*)
			;;
	esac

	amixer -c $CARD sset "$1" "$2" > /dev/null
}

amp1_init()
{
	amp1 0x05 0x01
	amp1 0x01 0xc0
        amp1 0x04 0x00
	case $BOARD in
		jetson-nano)
			amp1 0x02 0x1d
		        amp1 0x03 0x50
			amp1 0x00 0xff
			;;
		rpi)
			amp1 0x02 0x0d
			amp1 0x03 0xc0
			amp1 0x00 0xaf
			;;
		*)
			;;
	esac
}

amp2_init()
{
	amp2 0x05 0x01
	amp2 0x01 0x00
	amp2 0x04 0x00
	case $BOARD in
		jetson-nano)
	        	amp2 0x02 0x1d
	        	amp2 0x03 0x58
			amp2 0x00 0xff
			;;
		rpi)
			amp2 0x02 0x0d
			amp2 0x03 0xc0
			amp2 0x00 0xaf
			;;
		*)
			;;
	esac
}

setup_codec()
{

	case $BOARD in
		jetson-nano)
			mixpath "ADMAIF1 Mux" I2S4
		        mixpath "I2S4 Mux" ADMAIF1
		        mixpath "I2S4 codec frame mode" dsp-a
		        mixpath "I2S4 codec master mode" None
		        mixpath "I2S4 codec bit format" 32
		        mixpath "I2S4 Sample Rate" 48000
		        mixpath "I2S4 BCLK Ratio" 0
		        mixpath "I2S4 fsync width" 127
		        mixpath "ADMAIF1 Channels" 8
		        mixpath "I2S4 Channels" 8
			;;
		rpi)
			echo "No codec config needed on RPi"
			;;
		*)
			;;
	esac
}

init()
{
	echo "Powering up board"
	power_on

	sleep 1

	echo "Configuring amp 1"
	amp1_init
	echo "Configuring amp 2"
	amp2_init

	sleep 1

	echo "Setting up codec"
	setup_codec

	echo "Done"
}

init
