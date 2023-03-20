// C++ code
//
int rled = 2;   //red led
int bled = 3;   // blued led
int gled = 4;   // green led

void setup()
{
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
  pinMode(bled, OUTPUT);
}

void loop()
{
  digitalWrite(rled,HIGH);
  digitalWrite(bled,LOW);
  digitalWrite(gled,LOW);
  delay(1000);
  
  digitalWrite(rled,LOW);
  digitalWrite(bled,HIGH);
  digitalWrite(gled,LOW);
  delay(1000);
  
  digitalWrite(rled,LOW);
  digitalWrite(bled,LOW);
  digitalWrite(gled,HIGH);
  delay(1000);
}