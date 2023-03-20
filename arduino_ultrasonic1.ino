// add an led/buzzer 


int trig = 5;
int echo = 4;
// int led = 3;
long time;
float distance ;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{ digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(20);
  digitalWrite(trig,LOW);
  time =  pulseIn(echo,HIGH);
  distance = (0.0346*(time+22))/2;
  
  Serial.print("Distance: ");
 Serial.print(distance);
 Serial.println("  cm"); // thss changes line
}