#!/bin/bash

# Audio interfaces
AIF="ADMAIF1"
I2S=4

# Set a mixer parameter
mixpath()
{
	amixer -c tegrasndt210ref sset "$1" "$2" > /dev/null
}

# Configures ALSA to output the correct signaling on I2S4 for the A2B transceiver.
setup_codec()
{
	mixpath "I2S$I2S Mux" MVC1
	mixpath "MVC1 Mux" $AIF
	mixpath "$AIF Mux" I2S$I2S
	amixer -c tegrasndt210ref cset name='MVC1 Vol' 12000 # Volume cap (Learned a lesson here)
        mixpath "I2S$I2S codec frame mode" dsp-a
        mixpath "I2S$I2S codec master mode" None
        mixpath "I2S$I2S codec bit format" 32
        mixpath "I2S$I2S Sample Rate" 48000
        mixpath "I2S$I2S BCLK Ratio" 0

	# Frame sync width and channel count
	FS_WIDTH=1
	CHANNELS=8

	mixpath "I2S$I2S fsync width" $FS_WIDTH
	mixpath "$AIF Channels" $CHANNELS
        mixpath "I2S$I2S Channels" $CHANNELS

	echo "Linked I2S$I2S to $AIF with $CHANNELS channels and FS width of $FS_WIDTH"
}

# Run A2B stack and start discovery
configure_a2b()
{
	./a2bapp-linux -D
}

init()
{
	echo "Setting up codec"
        setup_codec
        echo "Configuring A2B bus"
        configure_a2b
        echo "Done"
}

init
