// Code by arduiNote 22.09.2022


bool logicON_OFF =0;

int threshold = 540; //Enter Your threshold value here

int absolute_value = 0;

int sensor_value = 0;



void setup() {
  
    pinMode(5, OUTPUT);
}




void loop() {

sensor_value = analogRead(A0);

absolute_value = abs(sensor_value - threshold);


if (absolute_value>190)
  { 
      logicON_OFF=!logicON_OFF;
      
      digitalWrite(5, logicON_OFF);   // turn the LED on (HIGH is the voltage level)
      
      delay(1000); 
  }

}
