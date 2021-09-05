Tesla Model 3 Premium Amp reverse engineering and A2B demo for EVAL-AD2410WDZ or ADAU1452

## Status for ADAU1452:
- Analog audio input to the DSP works via the onboard ADAU1761 codec.
- ADI surround algorithm and HPF/LPF provide center, rear, subwoofer, and tweeter outputs
- The TDA7802 (channels 4-7) still does not play any audio. More reverse engineering will be required to fix this.
- For now, only left, right, center, and subwoofer channels work on the large connector.
- Crackling on channels 2 and 3 has been fixed.

# Status for Jetson Nano:
- The A2B bus will drop as soon as the audio interface goes to sleep. DAPM needs to be disabled since the bus needs a constant clock.
- The TDA7802 (channels 4-7) still does not play any audio. More reverse engineering will be required to fix this.
- Crackling on channels 2 and 3 has been fixed.

## Plans:
- Get all 8 audio channels playing audio.
- SPDIF input
- Auto source selection
- I2S input and configuration from an audio host (i.e. Raspberry Pi)
- Volume control
- EQ
- Optimization for automotive environments

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
- Channel mapping
- GPIO expander pin mapping
- I2C addresses
- External connector pinouts

### pulseview-captures:
- Raw I2C2 bus captures from Elon's brain

### sigma-studio-files:
- SigmaStudio project and register files for both Jetson nano and ADAU1452

### Amplifier pinout:
![Amp connectors](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/master/images/amp-pinout.png?raw=true)
Source:  [ Tesla Model 3 Stereo - Part 9: Summary and Lessons Learned](https://www.travisllado.com/2019/05/tesla-model-3-stereo-part-9-summary-and.html)

### Amp connector part numbers:
- A2B: TE AMP Mini50 2177586-1
- High wattage/power in: Sumitomo 6098-1714
- Low wattage: Sumitomo 6098-5713

### A2B board <-> Jetson Nano wiring:
![Wiring](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/master/images/a2b-jetson-nano.png?raw=true)

### I2C/TDM test points:
![Test points](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/master/images/i2c_tdm_pins.jpg?raw=true)

### Top of board:
![Top view](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/master/images/top.jpg?raw=true)
