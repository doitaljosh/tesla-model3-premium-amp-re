Tesla Model 3 Premium Amp reverse engineering and A2B demo for Jetson nano

## Status:
As of now, the script must be ran while audio is playing. 
Otherwise the A2B bus will drop since it needs a constant bit clock, 
and DAPM causes the I2S interface goes to sleep when not active. The high power 
channels are working (FDA2100), but the lower power ones (TDA7802) 
do not output any audio currently. (They worked yesterday, ugh.)
I will keep debugging it, and hopefully fix these flukes.

### bin:
- a2bapp-linux (When ran, this will set up the A2B bus when the Jetson nano, A2B master, and Tesla amp are connected.)
- run.sh (Sets up ALSA codecs and TDM interface, then runs a2bapp-linux)

### config:
- asound.conf (Janky workaround to play audio on all channels without DSP upmixing.)

### datasheets:
- AD2428W A2B transceiver (Register and pin compatible with AD2410)
- TDA7802 quad amp
- TDA7803a amp (Describes registers compatible with TDA7802)
- FDA2100 amp
- PCA9538 I2C GPIO expander
- LM2901 quad comparator
- 24C04K 4 Kbit I2C EEPROM

### i2c-logs:
- Annotated I2C transactions between Elon's brain and base amp/A2B transceiver

### notes:
- GPIO expander pin mapping
- I2C addresses
- I2C/TDM test point locations
- External connector pinouts

### pulseview-captures:
- Raw I2C2 bus captures from Elon's brain

### sigma-studio-files:
- SigmaStudio project and register files

### Amplifier pinout:
![Amp connectors](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/master/images/amp-pinout.png?raw=true)
*Source: * [ Tesla Model 3 Stereo - Part 9: Summary and Lessons Learned](https://www.travisllado.com/2019/05/tesla-model-3-stereo-part-9-summary-and.html)

### Amp connector part numbers:
- A2B: TE AMP MQS 2177586-1
- High wattage/power in: Sumitomo unknown
- Low wattage: Sumitomo 6098-5713

### A2B board <-> Jetson Nano wiring:
![Wiring](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/master/images/a2b-jetson-nano.png?raw=true)
