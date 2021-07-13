#!/bin/bash

# Experimental script to interface a Jetson nano to a hacked Model 3 amp

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

amp2() # fda2100
{
	i2c 0x6e $1 $2
}

power_on()
{
	expander 0x03 0x00
	expander 0x01 0x32
}

mixpath()
{
	amixer -c tegrasndt210ref sset "$1" "$2"
}

init()
{
	power_on

	sleep 1

	amp1 0x00 0xff
	amp1 0x01 0x00
	amp1 0x02 0x1d
	amp1 0x03 0x50
	amp1 0x04 0x00
	amp1 0x05 0x00
	amp1 0x06 0x00
	amp1 0x07 0x01

	amp2 0x00 0xff
	amp2 0x01 0x00
	amp2 0x02 0x1d
	amp2 0x03 0x58
	amp2 0x04 0x00
	amp2 0x05 0x00
	amp2 0x06 0x00
	amp2 0x07 0x01

	mixpath "ADMAIF1 Mux" I2S4
	mixpath "I2S4 codec frame mode" dsp-a

	mixpath "I2S4 fsync width" 255
	mixpath "ADMAIF1 Channels" 8
	mixpath "I2S4 Channels" 8
}

init
