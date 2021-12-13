int led1 = 11;
int led2 = 10;
int led3 =9;

int buttonPin =12;// 每个引脚控制的哪个元器件。


bool JiamingPretty = HIGH;//boolian argument的例子
bool RichardPretty = 0; //boolian argument的例子

char uesrName = "Jiaming";
char initial ='J';

char* names[] = {"Richard","Jiaming","Ruiqi","Wenwen","Zeeshan","Amos","Vald","Yujing"}; //存文本信息前面是char，如果是数字的话前面是int。
int ledPin[]={11,10,9};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(buttonPin,INPUT);//在这里声明引脚是输出还是输入。往外输出电压就写OUTPUT（用的较多），读取数据的时候写INPUT（用的较少）。
}

void loop() {
//for (int i= =;i<=2;i++){
  //digitalWrite(ledPins[i],HIGH);
 // delay(2000);
 // digitalWrite(ledPins[i],LOW);
//}

 for(int i=0; i<=7;i++){ //i++=1
  Serial.println(names[i]);
  delay(2000);
 }
 
  // put your main code here, to run repeatedly:
 //if (digitalRead(buttonPin) == HIGH){
 //  Serial.print("Hello");
 //  digitalWrite(led1,HIGH);
 //  digitalWrite(led2,LOW);
 //}
//else if (digitalRead(buttonPin2) == HIGH){
  // Serial.print("Hello");
 //  digitalWrite(led1,HIGH);
  // digitalWrite(led3,HIGH);
  // digitalWrite(led2,LOW);
// }
//else{                       
  //Serial.print("Goodbye");
  //digitalWrite(led1,LOW);
 // digitalWrite(led3,LOW);
 // digitalWrite(led2,HIGH);
// }
//delay(200);

void

}
