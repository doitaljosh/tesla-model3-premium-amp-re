#!/bin/bash

NUM_AMPS=2
AIF="ADMAIF1"
I2S=4

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
        [ "$3" = "$i2cread" ] && return 0 || echo "i2c read failure, $1 $2 returned: $i2cread"
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
	expander 0x01 0x14
	expander 0x03 0x88
}

enable_amp()
{
	if [[ "$NUM_AMPS" == 1 ]]; then
		i2cset -y 1 0x70 0x01 0x16
	else
		i2cset -y 1 0x70 0x01 0x37
	fi
}

mixpath()
{
	amixer -c tegrasndt210ref sset "$1" "$2" > /dev/null
}

amp1_init()
{
	amp1 0x00 0x0f
        amp1 0x01 0x00
        amp1 0x02 0x18
	amp1 0x03 0x49
        amp1 0x04 0x00
        amp1 0x05 0x01
}

amp2_init()
{
	amp2 0x00 0x5c
        amp2 0x01 0x07
        amp2 0x02 0x0f
        amp2 0x03 0x00
        amp2 0x04 0x00
        amp2 0x05 0x11
	amp2 0x06 0x11
	amp2 0x07 0x11
	amp2 0x08 0x11
	amp2 0x09 0x00
	amp2 0x0a 0x00
	amp2 0x0b 0x00
	amp2 0x0c 0x40
	amp2 0x0d 0x00
	amp2 0x0e 0x03
}

setup_codec()
{
	mixpath "$AIF Mux" I2S$I2S
        mixpath "I2S$I2S Mux" $AIF
        mixpath "I2S$I2S codec frame mode" dsp-a
        mixpath "I2S$I2S codec master mode" None
        mixpath "I2S$I2S codec bit format" 32
        mixpath "I2S$I2S Sample Rate" 48000
        mixpath "I2S$I2S BCLK Ratio" 50

	if [[ "$NUM_AMPS" == 1 ]]; then
		FS_WIDTH=127
		CHANNELS=4
	else
		FS_WIDTH=255
		CHANNELS=8
	fi

	mixpath "I2S$I2S fsync width" $FS_WIDTH
#	mixpath "$AIF Channels" $CHANNELS
        mixpath "I2S$I2S Channels" $CHANNELS

	echo "Linked I2S$I2S to $AIF with $CHANNELS channels and FS width of $FS_WIDTH"
}

init()
{
	echo "Setting up codec"
        setup_codec
#	sleep 1
        echo "Done"

	echo "Powering up amp"
	power_on
	sleep 0.25
	enable_amp

	sleep 0.15

	echo "Configuring amp 1"
	amp1_init
	echo "Done"

	if [[ "$NUM_AMPS" == 1 ]]; then
		echo "Not configured for two amps, only configuring one"
	else
		echo "Configuring amp 2"
		amp2_init
		echo "Done"
	fi
}

init
