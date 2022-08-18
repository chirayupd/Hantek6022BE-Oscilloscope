The maximum input capacity of the Hantek DSO is 35V peak-to-peak. Hence, in order to measure the 220V mains supply, we need to step-down the AC supply to appropriate level. For this purpose use of [ZMPT101b](https://www.electroschematics.com/voltage-sensor/) micro-transformer based voltage sensor is used. More information can be found on [datasheet](http://5nrorwxhmqqijik.leadongcdn.com/attachment/kjilKBmoioSRqlkqjoipSR7ww7fgzb73m/ZMPT101B-specification.pdf).

![image](https://user-images.githubusercontent.com/51395566/185307959-a7c10dd2-a85a-4954-98fb-6748f0e46adf.png)

A microcontroller is for 2 reasons:
1. To measure and calculate the RMS value of the voltage.
2. In case there is a offset in the ZMPT101B sensor (eg. At no external input, if the output is more/less than 2.5V, then that offset can be corrected using a simple code)


