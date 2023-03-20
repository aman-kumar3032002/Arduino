//  click on the pir sensor to simulate it
// if the sensor detects in its range it outputs 1, the buzzer gets on and the led gets off
// if it does not detects anything, the buzzer gets off and the led gets on
// you can use if-else if- else branching to add multiple conditions.
// 
int pir = 12;
int pirV;             // variable to store the digital signals of the sensor

int buzzer = 2;

// try to use a rgb led 
int rled = 11;
int yled = 10;
int gled = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(pir,INPUT);
  
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(yled,OUTPUT);
}
void loop()
{
  pirV = digitalRead(pir);
  Serial.println(pirV);  
  if(pirV == 1){
    digitalWrite(buzzer,HIGH);
    digitalWrite(gled,LOW);
    digitalWrite(rled,LOW);
    digitalWrite(yled,LOW);
  }
  else{
    digitalWrite(buzzer,LOW);
    digitalWrite(gled,HIGH);
    digitalWrite(rled,HIGH);
    digitalWrite(yled,HIGH);
  }  
}