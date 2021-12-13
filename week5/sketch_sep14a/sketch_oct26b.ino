int MQ2Pin=A0;
float sensorValue;
#include <SPI.h> // 加载SPI库
#include <Wire.h> // 加载Wire库
#include <Adafruit_GFX.h> // 加载Adafruit_GFX库
#include <Adafruit_SSD1306.h> // 加载Adafruit_SSD1306库

// 定义 OLED屏幕的分辨率
Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);//设置OLED 屏幕。

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(12, OUTPUT);
 pinMode(15, OUTPUT);                     
delay(2000);
display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // 设置OLED的I2C地址
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(MQ2Pin);
Serial.print("Sensor Value:");
Serial.println(sensorValue);
 delay(2000);
 
if(sensorValue<160){
  digitalWrite(12,HIGH);
  digitalWrite(15,LOW);
}
else {
  digitalWrite(12,LOW);
  digitalWrite(15,HIGH);
}


display.clearDisplay(); // 清空屏幕

  display.setTextSize(1); // 设置字体大小
  display.setTextColor(SSD1306_WHITE); // 设置字体颜色
  display.setCursor(0,0); // 设置开始显示文字的坐标
  display.print("left-sensor"); // 输出的字符
  display.println(sensorValue);
//   display.print("middle-sensor"); // 输出的字符
//  display.println(sensorvalue2);
//   display.print("right-sensor"); // 输出的字符
//  display.println(sensorvalue3);
  display.display(); // 使更改的显示生效
}
