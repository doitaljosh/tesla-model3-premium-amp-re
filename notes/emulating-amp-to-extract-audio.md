Model 3 amp emulation

The purpose of this document is to explain the logic of what I2C slave
addresses, registers, and values the MCU expects at different stages of 
A2B discovery. Emulating all expected I2C devices and registers will
effectively "fool" the MCU into thinking an amp is connected, thus
providing a constant audio stream to a custom A2B slave device without
the original amplifier configuration. A DSP can then be used
to combine the chopped up audio signals into a full-spectrum stereo
stream to be sent to (a) DAC(s) or SPDIF TX. Two 32-bit 48kHz TDM4 streams
are output on TX0/TX1 for a total of eight channels.

## Channel configuration:

### TX0:

0. Right Subwoofer (subsonic)
1. Left Subwoofer (subsonic)
2. Right front woofer (low)
3. Left front woofer (low)

### TX1:

4. Right rear (low/mid)
5. Left rear (low/mid)
6. Right parcel (mid/high)
7. Left parcel (mid/high)

## Stage 1: 

### Emulate EEPROM
| Slave: | Register: | Value: | Note: |
| -------|-----------|--------|------ |
| 0x56 | 0x00 | 0x00 | Must respond with value |
| 0x56 | 0x01 | 0x54 | Must respond with value |
| 0x56 | 0x02 | 0x46 | Must respond with value |
| 0x56 | 0x03 | 0x05 | Must respond with value |
| 0x56 | 0x04 | 0x00 | Must respond with value |
| 0x56 | 0x05 | 0x00 | Must respond with value |
| 0x56 | 0x06 | 0x00 | Must respond with value |
| 0x56 | 0x07 | 0x62 | Must respond with value |

### Emulate GPIO expander

| Slave: | Register: | Value: | Note: |
| -------|-----------|--------|------ |
| 0x70   | 0x01      | 0x88   | Must be writable |
| 0x70   | 0x03      | 0x14   | Must be writable |

## Stage 2:
Input a high signal to IO5 of the transceiver

## Stage 3:
Keep IO5 high until IO2 and IO6 are brought high.

## Stage 4:
| Slave: | Register: | Value: | Note: |
| -------|-----------|--------|------ |
| 0x70   | 0x03      | 0x16   | Must be writable |

## Stage 5:
Wait a few ms then bring IO5 high

## Stage 6:
Emulate amplifier registers:

### TDA7802

| Slave: | Register: | Value: | Note: |
| -------|-----------|--------|------ |
| 0x6c   | 0x00      | 0x0f   | Must be writable |
| 0x6c   | 0x01      | 0x00   | Must be writable |
| 0x6c   | 0x02      | 0x18   | Must be writable |
| 0x6c   | 0x03      | 0x40   | Must be writable |
| 0x6c   | 0x04      | 0x00   | Must be writable |
| 0x6c   | 0x05      | 0x01   | Must be writable |

### FDA801

| Slave: | Register: | Value: | Note: |
| -------|-----------|--------|------ |
| 0x6e   | 0x00      | 0x5c   | Must be writable |
| 0x6e   | 0x01      | 0x07   | Must be writable |
| 0x6e   | 0x02      | 0x0f   | Must be writable |
| 0x6e   | 0x03      | 0x00   | Must be writable |
| 0x6e   | 0x04      | 0x00   | Must be writable |
| 0x6e   | 0x05      | 0x11   | Must be writable |
| 0x6e   | 0x06      | 0x11   | Must be writable |
| 0x6e   | 0x07      | 0x11   | Must be writable |
| 0x6e   | 0x08      | 0x11   | Must be writable |
| 0x6e   | 0x09      | 0x00   | Must be writable |
| 0x6e   | 0x0a      | 0x00   | Must be writable |
| 0x6e   | 0x0b      | 0x00   | Must be writable |
| 0x6e   | 0x0c      | 0x40   | Must be writable |
| 0x6e   | 0x0d      | 0x00   | Must be writable |
| 0x6e   | 0x0e      | 0x03   | Must be writable |
