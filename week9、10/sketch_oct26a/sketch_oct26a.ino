int MQ2Pin=A0;
float sensorValue;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);                     
 
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(MQ2Pin);
Serial.print("Sensor Value:");
Serial.print(sensorValue);
 delay(2000);
}
