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

}
