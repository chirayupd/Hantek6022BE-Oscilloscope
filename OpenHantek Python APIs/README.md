# Python APIs

This is a API for Python for the ultra-cheap, reasonably usable (and hackable) 6022 DSO, with a libusb implementation via libusb1 for Linux.

The scope can be accessed by instantiating an oscilloscope object. Things like voltage divisions and sampling rates can be set by the appropriate methods.

The APIs can be downloaded from the following github pages:

[rpcope APIs](https://github.com/rpcope1/Hantek6022API)

[Ho-Ro APIs](https://github.com/Ho-Ro/Hantek6022API)

# Linux Installation

Provided are bindings for libusb to operate DSO with simple python commands. As a user you can directly install the [releases](https://github.com/Ho-Ro/Hantek6022API/releases) or if you want to modify the python programs as a developer you need to clone the [repository](https://github.com/Ho-Ro/Hantek6022API#linux-install) and work with it more intensively.


## 1. Zero-offset Callibration

After the initial installation of the Openhantek, there may be a requirement to  calibrate the oscilloscope for zero-offset correction. This can be achieved by using the python APIs available in the [example](https://github.com/Ho-Ro/Hantek6022API/tree/main/examples) directory.

* Firstly, apply 0v to both the channels
* Use the command:
```
calibrate_6022.py -ceg

Arguments:
 -c, --create_config  create config file
 -e, --eeprom         store calibration values in eeprom
 -g, --measure_gain   interactively measure gain (as well as offset)
```
## 2. Data Logging with Oscilloscope

With the help of python APIs, we can now log the oscilloscope datapoints for long durations. 

For capturing data use:
```
usage: capture_6022.py [-h] [-d [DOWNSAMPLE]] [-g] [-o OUTFILE] [-r RATE] [-t TIME] [-x CH1]
                    [-y CH2]

optional arguments:
-h, --help            show this help message and exit
-d [DOWNSAMPLE], --downsample [DOWNSAMPLE]
                        downsample 256 x DOWNSAMPLE
-g, --german          use comma as decimal separator
-o OUTFILE, --outfile OUTFILE
                        write the data into OUTFILE
-r RATE, --rate RATE  sample rate in kS/s (20, 32, 50, 64, 100, 128, 200, default: 20)
-t TIME, --time TIME  capture time in seconds (default: 1.0)
-x CH1, --ch1 CH1     gain of channel 1 (1, 2, 5, 10, default: 1)
-y CH2, --ch2 CH2     gain of channel 2 (1, 2, 5, 10, default: 1)
```

For plotting the data
```
usage: plot_from_capture_6022.py [-h] [-i INFILE] [-c CHANNELS] [-s [MAX_FREQ]]

optional arguments:
  -h, --help            show this help message and exit
  -i INFILE, --infile INFILE
                        read the data from INFILE
  -c CHANNELS, --channels CHANNELS
                        show one (CH1) or two (CH1, CH2) channels, default: 2)
  -s [MAX_FREQ], --spectrum [MAX_FREQ]
                        display the spectrum of the samples, optional up to MAX_FREQ
```

Note: The data is plotted in a python file using matplotlib function. However, for files with huge number of datapoints, it may not be able to load in the matplotlib. In such case we can plot the results in MATLAb by importing the .csv file over there.

## 3. Qt framework based GUI

In order to access the Qt based GUI go to examples directory

```
usage: realtime_qt_complex.py
```
The GUI is for 1-channel only, however, we can modify the source-code to include multiple channels in GUI.




