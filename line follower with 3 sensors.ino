// This code is uses only 3 sensors.
// Best for simple line follower robots(can't solve mazes)

//right motor
#define ENA 11
#define IN1 10     // +ve  right
#define IN2 9      // -ve right

//left motor
#define IN3 8   // +ve left
#define IN4 7   // -ve right
#define ENB 6

int sensor1 = 2;      // Left most sensor
int sensor2 =3;       // mid sensor
//int sensor3 = 5;      // right sensor

int speed_left = 100;                      // changing the values will change the speed of the motors
int speed_right = 100;

int sensor[3] = {0,0,0};

// functions 
void forward();
void Stop();
void sharpleft();
void sharpright();
void left();
void right();

void setup() {
  //Sensor pins
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);

  //Motor one
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  //Motor two
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600);

}
void loop() {
  sensor[0] = digitalRead(sensor1);
  sensor[1] = digitalRead(sensor2);
  sensor[2] = digitalRead(sensor3);
//  Serial.print(sensor[0]);
//  Serial.print(sensor[1]);
//  Serial.print(sensor[2]);
//  Serial.print(sensor[3]);
//  Serial.println(sensor[4]);

  if ((sensor[0] == 0) && (sensor[1] == 1) && (sensor[2] == 0)) {
    forward();
  } else if ((sensor[0] == 0) && (sensor[1] == 1) && (sensor[2] == 1)) {
    sharpright();
  } else if ((sensor[0] == 1) && (sensor[1] == 1) && (sensor[2] == 0)){
    sharpleft();
  }
  
  else if ((sensor[0] == 1) && (sensor[1] == 0) && (sensor[2] == 0)){
    left();
  }
  else if((sensor[0] == 0) && (sensor[1] == 0) && (sensor[2] == 1)){
    right();
  } 
 else if((sensor[0] == 1) && (sensor[1] == 1) && (sensor[2] == 1)){
  Stop();
 }
}

void forward() {
  analogWrite(ENA, speed_right);
  analogWrite(ENB, speed_left);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(IN2, LOW);
}
void sharpright() {
  analogWrite(ENA, 250);       
  analogWrite(ENB, 250);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(IN3, HIGH);
}
void sharpleft() {
  analogWrite(ENA, 250);
  analogWrite(ENB, 250);
  digitalWrite(IN2, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN3, LOW);
}
void Stop() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
void left(){
  analogWrite(ENA, speed_right);
  analogWrite(ENB, speed_left);
  digitalWrite(IN2, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
void right(){
  analogWrite(ENA, speed_right);
  analogWrite(ENB, speed_left);
  digitalWrite(IN2, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
}
