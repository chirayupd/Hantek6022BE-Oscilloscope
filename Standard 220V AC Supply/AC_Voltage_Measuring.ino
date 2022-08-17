#include <Filters.h> //Library to do the calculations

float testFreq = 50;                     // test signal frequency (Hz)
float windowLen = 40.0/testFrequency;     

int Sensor = 1; //Sensor analog input (here I have taken A1 pin so therefore value is 1)

float intercept = -0.07; // to be adjusted based on calibration testing (in my case value was 2.43volts)
float slope = 0.0403; // to be adjusted based on calibration testing
float current_Volts; // Voltage

unsigned long printPeriod = 500; //Refresh rate
unsigned long previousMillis = 0;


void setup() {
  Serial.begin( 9600 );    // start the serial port
}

void loop() {
  
  RunningStatistics inputStats;               
  inputStats.setWindowSecs( windowLength );
   
  while( true ) {   
    Sensor = analogRead(A1);  // read value at A1 analog pin
    inputStats.input(Sensor);  // log to Stats function
        
    if((unsigned long)(millis() - previousMillis) >= printPeriod) {
      previousMillis = millis();   // update time every second
            
      Serial.print( "\n" );
      
      current_Volts = intercept + slope * inputStats.sigma(); //Calibartions for offset and amplitude
      current_Volts= current_Volts*(40.3537);                //Further calibrations for the amplitude
      
      Serial.print( "\tVoltage: " );
      Serial.print( current_Volts ); //Calculation and Value display is done the rest is if you're using an OLED display
                
      
    }
  }

}
