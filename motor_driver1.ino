//ENA is for Right motor
//ENB is for Left Motor
// These pins are always connected to the PWM pins of the Arduino.

int ENA = 11;  // it is used to control the speed of the motors
int ENB = 5;

// These pins are used for controlling the direction of the motors
int IN1 = 10;  // -ve of right motor
  int IN2 = 9; // +ve of right motor

  int IN3 = 7;  // +ve of right motor
  int IN4 = 6;  // -ve of right motor

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop(){
  analogWrite(ENA,100);
  analogWrite(ENB, 200);
  
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  
}
  // Try to swap the values of the IN3 and IN4 to get +ve rpm 
  // the working and programming of the L298N and L298D is same.