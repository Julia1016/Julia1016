void setup() {
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  multiPlex(LOW,LOW,LOW);
  multiPlex(LOW,LOW,HIGH);
  multiPlex(LOW,HIGH,LOW);
  multiPlex(LOW,HIGH,HIGH);
  multiPlex(HIGH,LOW,LOW);
  multiPlex(HIGH,LOW,HIGH);
  multiPlex(HIGH,HIGH,LOW);
  multiPlex(HIGH,HIGH,HIGH);
  
}

void multiPlex(bool z,bool y,bool x){
     digitalWrite(11,z);
     digitalWrite(10,y);
     digitalWrite(9,x);
     delay(50);
     
     
}
