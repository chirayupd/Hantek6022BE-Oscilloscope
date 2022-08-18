#### Software Installation

•	Download the Hantek-6022BE Software from the given website: http://www.hantek.com/products/detail/31 or download the zip file from this directory.

•	Run the setup.exe file.

####	Driver Installation of Windows-10

•	Connect the hardware with PC using a USB cable.

•	Open the device manager and click on the Other Devices then click on the Unknown Device. 

•	Click the Update Driver Software.

•	Browse to the Driver folder in the downloaded zip file and select Driver for Windows 10. Select the Hantek6022BE.inf file.


### Hantek6022BE Specifications

* Channels - 2
* 20 MHz Bandwidth
* Input Impedence - 1 M ohm, 25 pF
* 8-bit verticle resolution.
* +/- 3v DC accuracy.
* 35V p-p maximum input voltage.
* The device has no internal storage (except for a small fifo buffer), all data is streamed in real time as USB bulk transfer.
* Supports 48, 30, 24, 16, 15, 12, 10, 8, 6, 5, 4, 3, 2, 1 MS/s and 500, 400, 200, 100, 64, 50, 40, 20 kS/s samplerates (Using OpenHantek Software).
* Due to the USB bandwith constraints the max usable samplerate is limited: Max 30 MS/s for CH1 only and max 15 MS/s for CH1+CH2 and also CH2 only - otherwise data overrun occurs (while using OpenHantek).
* Maximum Sampling Rate - 48 MSa/s (Using original Hantek Software)
* No AC coupling is there. 
* AC coupling can be added with some [hardware modifications](https://github.com/OpenHantek/OpenHantek6022/blob/main/docs/HANTEK6022_AC_Modification.pdf).
* The scope program works with blocks of 20000 samples - either 8 bit samples for CH1
* For low effective sampling rates < 1 MS/s a 10X..200X oversampling is used to increase the signal-to-noise ratio by 10..20 dB and to get a better voltage resolution (up to > 11 effective bits). The oversampling allows also low effective samplerates down to 100 S/s for a slow display range of 10s/div.
* The first samples are unstable (due to the use of the ADC far outside the common mode voltage specifications) -> take about 2000 additional values to settle the ADC and drop the first samples.
* No HW trigger available, SW trigger searches for trigger condition and positions the trace window accordingly.4
* Can detect rising or falling edge (also alternating from trace to trace) of the signal, displayed trigger position can be at 0..100% of screen width.


### Hantek6022BE Software Limitations
