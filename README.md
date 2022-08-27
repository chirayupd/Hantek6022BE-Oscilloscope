# Hantek6022BE-Oscilloscope

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



## 1. Hantek Proprietery Software

It contains the software and hardware driver files for Windows OS and description of its installation.

![image](https://user-images.githubusercontent.com/51395566/187034178-7717568d-e8a0-4d95-be8e-599293495401.png)

## 2. BasicScope

It is an alternative to original Hantek software for Windows OS.

![image](https://user-images.githubusercontent.com/51395566/187034166-a21f75e2-a7df-4901-a128-e1a5dcc052a2.png)

## 3. Openhantek

It is another alternative which is compatible with both Windows and Linux based systems.

![image](https://user-images.githubusercontent.com/51395566/187034220-45a88053-bfbf-4c25-b121-d7a7426ab98b.png)
![image](https://user-images.githubusercontent.com/51395566/187034233-02e29fe4-2471-4cbb-a14c-376ad0043b4f.png)

## 4. Openhantek Python APIs

These python APIs can be used in Linux as well as Windows based systems. It eliminates almost all the limitations of the previously used software and enables the user to detect waveforms for longer duration of time, adjust the sampling rate, perform zero callibration and store the datapoints.

## 5. Standard 220V AC Supply

Here a system is designed using ZMPT101b micro-transformer based AC voltage sensor to measure the mains supply using the Hantek Oscilloscope. There is a microcontroller code to measure the RMS value of the AC mains as well.
