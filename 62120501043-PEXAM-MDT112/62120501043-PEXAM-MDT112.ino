/* void setup(){
   pinMode(8,OUTPUT);
   tone(8, 900);
   delay(600);
   noTone(8); 
}
void loop()
{

}*/

/* void setup(){
    Serial.begin(9600);
    Serial.println("Hello MDT");
}
void loop()
{

}*/

/* 
int motorPin1 = 9;
int motorPin2 = 10;
int motorPin3 = 11;
int motorPin4 = 12;
int motorSpeed = 16; 
void setup(){
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
   Serial.println("step CW 360 DEGREE");
   delay(900);
}
void loop()
{  
   // 1
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(motorSpeed);
  // 2
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay (motorSpeed);
  // 3
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(motorSpeed);
  // 4
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(motorSpeed);

}*/
/* 
int motorPin1 = 9;
int motorPin2 = 10;
int motorPin3 = 11;
int motorPin4 = 12;
int motorSpeed = 16; 
void setup(){
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
   Serial.println("step CCW 360 DEGREE");
   delay(800);
}
void loop()
{   
   // 1
   digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  
  delay(motorSpeed);
  // 2
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay (motorSpeed);
  // 3
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
 
  delay(motorSpeed);
  // 4
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(motorSpeed);
}*/
/* 
#include "TM1637.h"
const int CLK = 17;
const int DIO = 16;
TM1637 sevenSegment(CLK,DIO);
void setup(){
    sevenSegment.init(); 
    sevenSegment.set(7);
    sevenSegment.displayStr("0000");
    delay(800);
   sevenSegment.clearDisplay(); 
}
void loop(){

}*/
/* 
void setup(){
   pinMode(8,OUTPUT);
   delay(800);
   tone(8, 00,300); 
}
void loop()
{

}*/
  
#define STEPPER_PIN_1 9
#define STEPPER_PIN_2 10
#define STEPPER_PIN_3 11
#define STEPPER_PIN_4 12
int step_number = 0;
void setup() {
pinMode(STEPPER_PIN_1, OUTPUT);
pinMode(STEPPER_PIN_2, OUTPUT);
pinMode(STEPPER_PIN_3, OUTPUT);
pinMode(STEPPER_PIN_4, OUTPUT);
pinMode(2,INPUT_PULLUP); 
}

void loop() {


  if (digitalRead(2) == 1)
   {
       if(digitalRead(2) == 0)
    {
    digitalWrite(STEPPER_PIN_1, HIGH);
    digitalWrite(STEPPER_PIN_2, LOW);
    digitalWrite(STEPPER_PIN_3, LOW);
    digitalWrite(STEPPER_PIN_4, LOW);

     digitalWrite(STEPPER_PIN_1, HIGH);
     digitalWrite(STEPPER_PIN_2, HIGH);
     digitalWrite(STEPPER_PIN_3, LOW);
     digitalWrite(STEPPER_PIN_4, LOW);

     digitalWrite(STEPPER_PIN_1, LOW);
     digitalWrite(STEPPER_PIN_2, HIGH);
     digitalWrite(STEPPER_PIN_3, LOW);
     digitalWrite(STEPPER_PIN_4, LOW);
 
    digitalWrite(STEPPER_PIN_1, LOW);
    digitalWrite(STEPPER_PIN_2, HIGH);
    digitalWrite(STEPPER_PIN_3, HIGH);
    digitalWrite(STEPPER_PIN_4, LOW);
    }
    else 
    {
     digitalWrite(STEPPER_PIN_1, LOW);
     digitalWrite(STEPPER_PIN_2, LOW);
     digitalWrite(STEPPER_PIN_3, LOW);
     digitalWrite(STEPPER_PIN_4, LOW);
    }
    //step_number++;
  }
  if (step_number<=8) 
  {
    step_number=0;
  }
  
}
