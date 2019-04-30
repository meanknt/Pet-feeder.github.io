# :dog: Pet feeder :cat:
---
## Abstract &nbsp;:bookmark_tabs:
 * เนื่องด้วยปัจจุบัน ผู้คนมากมายล้วนมีสัตว์เลี้ยงที่ต้องให้อาหารเป็นประจำและมีปัญหากับการปล่อยให้สัตว์เลี้ยงต้องรออาหารเมื่อเวลาอาหารหมด ขี้เกียจที่จะลุกไปตักหรือเทอาหารให้สัตว์เลี้ยง หรือติดธุระปล่อยให้สัตว์เลี้ยงอยู่ในห้อง ในบ้านโดยลำพังโดยไม่มีใครให้อาหาร ทำให้สัตว์เลี้ยงต้องรอและมีอาการหิว และ การที่เทอาหารทิ้งไว้ในปริมาณมากหลายๆวัน สัตว์เลี้ยงจะรู้สึกว่าอาหารไม่สดใหม่ และไม่น่ากิน ทำให้สัตว์เลี้ยงไม่อยากอาหาร ต้องเททิ้งและเทให้ใหม่ซึ่งเป็นการสิ้นเปลืองดังนั้นกลุ่มของพวกเราจึงคิดค้นเครื่องให้อาหารสัตว์เลี้ยง ที่มีเซนเซอร์ตรวจจับว่าสัตว์เลี้ยงนั้นเดินมากินอาหาร แล้วเทอาหารมาโดยอัตโนมัติ และสามารถกดปุ่มเพื่อให้อาหารเทลงมาได้อีกด้วย นอกจากความสะดวกสบายในการให้อาหารสัตว์เลี้ยงแล้วยังเป็นการคงความสดของอาหารอีกด้วย
---
## Equipment &nbsp;:hammer:
---
| อุปกรณ์ที่ใช้ | รูปตัวอย่าง |
| --------- | --------- |
| Arduino Uno R3 | <img src="./images/aduno.jpg" width="250px" height="200px"> |
| Ultrasonic SR04 | <img src="./images/sensor.jpg" width="250px" height="200px"> |
| Servo SG5010 Standard Servo | <img src="./images/3.jpg" width="250px" height="200px">|
| Button Switch   | <img src="./images/button.jpg" width="250px" height="200px">   |
| Breadboard 400 holes  | <img src="./images/board.jpg" width="250px" height="200px"> |
| Jump Wire(Male to Female) | <img src="./images/1.jpg" width="250px" height="200px">  |
| 2-color LED module 5MM | <img src="./images/2.jpg" width="250px" height="200px"> |
## Code &nbsp; :memo:

## Author Profile &nbsp;:family:
|  | Name | Student ID | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Contacts |
| :-------- | :--------: | :--------: | :--------|
| <img src="./images/profile/mean.jpg" width="110px" height="110px">|   นายคณิติน ผลงาม  |   61070340   | [<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/meanknt) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/mean.phongam)|
|<img src="./images/profile/non.jpg" width="110px" height="110px"> |นายสุชานนท์ วิโรจน์รัตน์ |61070246 |[<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/Rektzie) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/suchanon.wirotrat) |
| <img src="./images/profile/mona.jpg" width="110px" height="110px">|นางสาวราโมน่า บราว|61070189|[<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/mona7315) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/profile.php?id=100001450568807) |
|<img src="./images/profile/numwan.jpg" width="110px" height="110px">| นางสาวธรรมรัตน์ หาญประสพ | 61070083 |[<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/nw-thmr) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/thmr.hps) |
# :dog: Pet feeder :cat:
---
## Abstract &nbsp;:bookmark_tabs:
 * เนื่องด้วยปัจจุบัน ผู้คนมากมายล้วนมีสัตว์เลี้ยงที่ต้องให้อาหารเป็นประจำและมีปัญหากับการปล่อยให้สัตว์เลี้ยงต้องรออาหารเมื่อเวลาอาหารหมด ขี้เกียจที่จะลุกไปตักหรือเทอาหารให้สัตว์เลี้ยง หรือติดธุระปล่อยให้สัตว์เลี้ยงอยู่ในห้อง ในบ้านโดยลำพังโดยไม่มีใครให้อาหาร ทำให้สัตว์เลี้ยงต้องรอและมีอาการหิว และ การที่เทอาหารทิ้งไว้ในปริมาณมากหลายๆวัน สัตว์เลี้ยงจะรู้สึกว่าอาหารไม่สดใหม่ และไม่น่ากิน ทำให้สัตว์เลี้ยงไม่อยากอาหาร ต้องเททิ้งและเทให้ใหม่ซึ่งเป็นการสิ้นเปลืองดังนั้นกลุ่มของพวกเราจึงคิดค้นเครื่องให้อาหารสัตว์เลี้ยง ที่มีเซนเซอร์ตรวจจับว่าสัตว์เลี้ยงนั้นเดินมากินอาหาร แล้วเทอาหารมาโดยอัตโนมัติ และสามารถกดปุ่มเพื่อให้อาหารเทลงมาได้อีกด้วย นอกจากความสะดวกสบายในการให้อาหารสัตว์เลี้ยงแล้วยังเป็นการคงความสดของอาหารอีกด้วย
---
## Equipment &nbsp;:hammer:
---
| อุปกรณ์ที่ใช้ | รูปตัวอย่าง |
| --------- | --------- |
| Arduino Uno R3 | <img src="./images/aduno.jpg" width="250px" height="200px"> |
| Ultrasonic SR04 | <img src="./images/sensor.jpg" width="250px" height="200px"> |
| Servo SG5010 Standard Servo | <img src="./images/3.jpg" width="250px" height="200px">|
| Button Switch   | <img src="./images/button.jpg" width="250px" height="200px">   |
| Breadboard 400 holes  | <img src="./images/board.jpg" width="250px" height="200px"> |
| Jump Wire(Male to Female) | <img src="./images/1.jpg" width="250px" height="200px">  |
| 2-color LED module 5MM | <img src="./images/2.jpg" width="250px" height="200px"> |
## Code &nbsp; :memo:

## Author Profile &nbsp;:family:
|  | Name | Student ID | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Contacts |
| :-------- | :--------: | :--------: | :--------|
| <img src="./images/profile/mean.jpg" width="110px" height="110px">|   นายคณิติน ผลงาม  |   61070340   | [<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/meanknt) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/mean.phongam)|
|<img src="./images/profile/non.jpg" width="110px" height="110px"> |นายสุชานนท์ วิโรจน์รัตน์ |61070246 |[<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/Rektzie) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/suchanon.wirotrat) |
| <img src="./images/profile/mona.jpg" width="110px" height="110px">|นางสาวราโมน่า บราว|61070189|[<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/mona7315) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/profile.php?id=100001450568807) |
|<img src="./images/profile/numwan.jpg" width="110px" height="110px">| นางสาวธรรมรัตน์ หาญประสพ | 61070083 |[<img src="./images/github.jpg" width="70px" height="45px">](https://github.com/nw-thmr) [<img src="./images/facebook.png" width="40px" height="45px">](https://web.facebook.com/thmr.hps) |
