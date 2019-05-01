# :dog: Pet feeder :cat:

## บทคัดย่อ &nbsp;:bookmark_tabs:
 * เนื่องด้วยปัจจุบัน ผู้คนมากมายล้วนมีสัตว์เลี้ยงที่ต้องให้อาหารเป็นประจำและมีปัญหากับการปล่อยให้สัตว์เลี้ยงต้องรออาหารเมื่อเวลาอาหารหมด ขี้เกียจที่จะลุกไปตักหรือเทอาหารให้สัตว์เลี้ยง หรือติดธุระปล่อยให้สัตว์เลี้ยงอยู่ในห้อง ในบ้านโดยลำพังโดยไม่มีใครให้อาหาร ทำให้สัตว์เลี้ยงต้องรอและมีอาการหิว และ การที่เทอาหารทิ้งไว้ในปริมาณมากหลายๆวัน สัตว์เลี้ยงจะรู้สึกว่าอาหารไม่สดใหม่ และไม่น่ากิน ทำให้สัตว์เลี้ยงไม่อยากอาหาร ต้องเททิ้งและเทให้ใหม่ซึ่งเป็นการสิ้นเปลืองดังนั้นกลุ่มของพวกเราจึงคิดค้นเครื่องให้อาหารสัตว์เลี้ยง ที่มีเซนเซอร์ตรวจจับว่าสัตว์เลี้ยงนั้นเดินมากินอาหาร แล้วเทอาหารมาโดยอัตโนมัติ และสามารถกดปุ่มเพื่อให้อาหารเทลงมาได้อีกด้วย นอกจากความสะดวกสบายในการให้อาหารสัตว์เลี้ยงแล้วยังเป็นการคงความสดของอาหารอีกด้วย

## วัตถุประสงค์  &nbsp;:question:
* เพื่อให้สัตว์เลี้ยงมีอาหารกินในขณะที่เจ้าของไม่อยู่ และเพิ่มความสะดวกสบายในการให่อาหารสัตว์เลี้ยงเพียงแค่กดปุ่ม อีกทั้งยังถนอมอาหารอีกด้วย

## อุปกรณ์ &nbsp;:hammer:

| อุปกรณ์ที่ใช้ | รูปตัวอย่าง |
| --------- | --------- |
| Arduino Uno R3 | <img src="./images/aduno.jpg" width="250px" height="200px"> |
| Ultrasonic SR04 | <img src="./images/sensor.jpg" width="250px" height="200px"> |
| Servo SG5010 Standard Servo | <img src="./images/3.jpg" width="250px" height="200px">|
| Button Switch   | <img src="./images/button.jpg" width="250px" height="200px">   |
| Breadboard 400 holes  | <img src="./images/board.jpg" width="250px" height="200px"> |
| Jump Wire(Male to Female) | <img src="./images/1.jpg" width="250px" height="200px">  |
| 2-color LED module 5MM | <img src="./images/2.jpg" width="250px" height="200px"> |
## อุปกรณ์อื่นๆ
* ไม้ฉลุ
* กล่องเลย์
* เทปกาว



## หลักการทำงาน   &nbsp; :wrench:
* เมื่อแมวเข้ามาใกล้ อาหารจะถูกปล่อยออกมา เมื่อสัตว์เลี้ยงกำลังกินอยู่ ภายใน 3 วินาที เครื่องก็จะปล่อยเพิ่มออกมา เมื่อสัตว์เลี้ยงออกจากsensorเครื่องก็จะหยุดทำงาน สามารถกดปุ่มเองได้เพื่อให้อาหารออกมา เมื่อเครื่องทำงานไฟ LED จะติด

## ภาพรวมงาน &nbsp;:camera:
* ภาพด้านข้าง

<img src="./images/finish.jpg" width="250px" height="200px"> <img src="./images/finish2.jpg" width="250px" height="200px">


* ภาพด้านหน้า
<img src="./images/finish3.jpg" width="250px" height="200px">

## Code &nbsp; :mag_right:
#include <Servo.h> <br>
#define trigPin 7<br>
#define echoPin 6<br>

volatile int btnState = 0;<br>
const int buttonPin = 2;<br>
const int ledPin =  13;<br>
Servo servo;<br>
int servoState = 0;<br>
long distance = 0;<br>
long duration = 0;<br>

void setup() {<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Serial.begin (9600);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;pinMode(trigPin, OUTPUT);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;pinMode(echoPin, INPUT);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;pinMode(2, INPUT);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;pinMode(13, OUTPUT);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;servo.attach(8);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;pinMode(ledPin, OUTPUT);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;pinMode(buttonPin, INPUT);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;attachInterrupt(digitalPinToInterrupt(2), pin_ISR, RISING);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;servo.write(0);<br>
}<br>
void loop() { <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;delay(500) <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;servo.write(0);<br>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;digitalWrite(trigPin, LOW);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;delayMicroseconds(2);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;digitalWrite(trigPin, HIGH);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;delayMicroseconds(10);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;digitalWrite(trigPin, LOW);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;duration = pulseIn(echoPin, HIGH);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;distance = (duration/2) / 29.1;<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if (distance > 0 && distance < 20) {<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;servo.write(90);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;delay(1000);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;servo.write(0);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;delay(3000);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}<br>
}<br>
void pin_ISR() {<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;servo.write(90);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Serial.println("button");<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;btnState = digitalRead(buttonPin);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;digitalWrite(ledPin, btnState);<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;delay(500);<br>
}


---

## Author Profile &nbsp;:family:
|  | Name | Student ID | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Contacts |
| :-------- | :--------: | :--------: | :--------|
| <img src="./images/profile/mean.jpg" width="110px" height="110px">|   นายคณิติน ผลงาม  |   61070340   | [<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/meanknt) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/mean.phongam)|
|<img src="./images/profile/non.jpg" width="110px" height="110px"> |นายสุชานนท์ วิโรจน์รัตน์ |61070246 |[<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/Rektzie) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/suchanon.wirotrat) |
| <img src="./images/profile/mona.jpg" width="110px" height="110px">|นางสาวราโมน่า บราว|61070189|[<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/mona7315) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/profile.php?id=100001450568807) |
|<img src="./images/profile/numwan.jpg" width="110px" height="110px">| นางสาวธรรมรัตน์ หาญประสพ | 61070083 |[<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/nw-thmr) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/thmr.hps) |
---
