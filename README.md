### Overview

Tesla Model 3 Premium Amp reverse engineering and A2B demo for EVAL-AD2410WDZ or ADAU1452. This project may be useful for those who wish to integrate the Tesla amp into a DIY car audio project, or extract digital audio from the ICE.

### Status for ADAU1452:
- Analog audio input to the DSP works via the onboard ADAU1761 codec.
- Custom filters and limiters provide rear, subwoofer, and tweeter outputs
- ~~The class AB amp (channels 4-7) still does not play any audio. More reverse engineering will be required to fix this.~~ Fixed
- ~~For now, only rear, tweeter and subwoofer channels play audio. Front and center channels need work.~~ All channels now work, but front channels are really attenuated.
- ~~Crackling on channels 2 and 3.~~ Fixed

### Status for Jetson Nano:
- The A2B bus will drop as soon as the audio interface goes to sleep. DAPM needs to be disabled since the bus needs a constant clock.
- ~~The class AB amp (channels 4-7) still does not play any audio. More reverse engineering will be required to fix this.~~ Fixed
- ~~Crackling on channels 2 and 3.~~ Fixed

### Plans:
- ~~Get all 8 audio channels playing audio.~~ Done
- SPDIF input
- Auto source selection
- I2S input and configuration from an audio host (e.g. Jetson Nano)
- Digital volume control
- Bass, treble adjustment
- Manual EQ and presets
- Dynamic EQ
- Linux codec driver

### Files:

#### bin:
- a2bapp-linux (When ran, this will set up the A2B bus when the Jetson nano, A2B master, and Tesla amp are connected.)
- run.sh (Sets up ALSA codecs and TDM interface, then runs a2bapp-linux)

#### config:
- asound.conf (Janky workaround to play stereo audio on all channels without DSP upmixing.)

#### datasheets:
- AD2428W A2B transceiver (Register and pin compatible with AD2410)
- TDA7802 quad amp
- TDA7803a amp (Describes registers compatible with TDA7802)
- FDA2100 amp
- PCA9538 I2C GPIO expander
- LM2901 quad comparator
- 24C04K 4 Kbit I2C EEPROM

#### i2c-logs:
- Annotated I2C transactions between BMP and base amp/A2B transceiver

#### notes:
- Channel mapping
- GPIO expander pin mapping
- I2C addresses
- External connector pinouts

#### pulseview-captures:
- Raw I2C2 bus captures from BMP

#### sigma-studio-files:
- ADAU1452 with ADI surround
- ADAU1452 with custom filters
![DSP flow](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/experimental/images/sigmastudio_1.png?raw=true)
![A2B flow](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/experimental/images/sigmastudio_2.png?raw=true)
- ADAU1452 with Tesla mic array as slave 0, and amp as slave 1 (Model 3 configuration).
- Jetson nano raw 8 channels

### Amplifier pinout:
![Amp connectors](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/experimental/images/amp-pinout.png?raw=true)
Source:  [ Tesla Model 3 Stereo - Part 9: Summary and Lessons Learned](https://www.travisllado.com/2019/05/tesla-model-3-stereo-part-9-summary-and.html)

### Amp connector part numbers:
- A2B: TE AMP Mini50 2177586-1
- Class D channels/power in: Sumitomo 6098-1714
- Class AB channels: Sumitomo 6098-5713

### A2B board <-> Jetson Nano wiring:
![Wiring](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/experimental/images/a2b-jetson-nano.png?raw=true)

### I2C/TDM test points:
![Test points](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/experimental/images/i2c_tdm_pins.jpg?raw=true)

### Top of board:
![Top view](https://github.com/doitaljosh/tesla-model3-premium-amp-re/blob/experimental/images/top.jpg?raw=true)

### Video of it in action
[![Video](https://img.youtube.com/vi/0QqQH-jE5aw/0.jpg)](https://www.youtube.com/watch?v=0QqQH-jE5aw "Model 3 Amp Test with Better DSP Algorithms (Wear headphones)")
