#include <Servo.h>
#define trigPin 7
#define echoPin 6

volatile int btnState = 0;
const int buttonPin = 2;
const int ledPin =  13;
Servo servo;

int servoState = 0;

long distance = 0;
long duration = 0;

void setup() {
Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  servo.attach(8);
   pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
attachInterrupt(digitalPinToInterrupt(2), pin_ISR, RISING);
servo.write(0);
}
  
  void loop() {

    delay(500);
    servo.write(0);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance > 0 && distance < 20) {
    servo.write(90);
    delay(1000);
    servo.write(0);
    delay(3000);
    }
  }
  
  void pin_ISR() {
    servo.write(90);
    Serial.println("button");
    btnState = digitalRead(buttonPin);
    digitalWrite(ledPin, btnState);
    
    delay(500);
}
