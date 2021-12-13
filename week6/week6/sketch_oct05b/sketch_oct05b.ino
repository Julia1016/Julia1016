int v1=11;
int v2=10;
int v4=9;
void setup() {
  // put your setup code here, to run once:
pinMode(v1,OUTPUT);
pinMode(v2,OUTPUT);
pinMode(v4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
multi(LOW,HIGH,LOW);//x2 no1
int sensorvalue1=analogRead(A0);
Serial.print("最左边的传感器:");
Serial.println(sensorvalue1);
delay(500);
multi(LOW,LOW,HIGH);//x4 no2
int sensorvalue2=analogRead(A0);
Serial.print("中间的传感器:");
Serial.println(sensorvalue2);
delay(500);
multi(LOW,HIGH,HIGH);//x6 no3
int sensorvalue3=analogRead(A0);
Serial.print("最右边的传感器6  6 6 6:");
Serial.println(sensorvalue3 );
delay(500);
}

void multi(bool x,bool y,bool z){
  digitalWrite(v1,x);
   digitalWrite(v2,y);
    digitalWrite(v4,z);
  
  
  }
