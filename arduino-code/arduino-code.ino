 //sensor setup
 int sensorPin = 5; //pin location for sensor setup 
 
 int sensorValBinary = 0; 
 int sensorValThreshold = 0; 
 
 //constants 
 int sensorVal = 0;

 //variables
 int sensorMax = 1023; //unknown value 1023, go back and revise when values are known 
 int sensorMin = 0; //unknown value 0, go back and revise when values are known
void setup() {
  Serial.begin(9600);
   //calibrate the sensor to pick up laser Vals 


  sensorVal = map(sensorVal, sensorMin, sensorMax, 0, 850);

  
   
  


}

void loop() {
  Serial.println(sensorVal);
    sensorVal = analogRead(sensorPin);

 if(sensorVal >= sensorValThreshold){
 sensorValBinary = 1;
 }
 else{
 sensorValBinary = 0;
 }
 delay(50); 
}
