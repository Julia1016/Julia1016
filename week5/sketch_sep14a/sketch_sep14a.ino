const int buttonPin = 2;
const int ledPin = 13;
boolean b=true;
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(buttonPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
  if(buttonState == LOW){
digitalWrite(12,b);
digitalWrite(13,!b);
delay(350);
b=!b;
  }
}
