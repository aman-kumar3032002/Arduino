//Zoom on the led to see the effect
// Change the pin from 3 to 4 to see if it works or not

int led = 3;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i<=255 ; i++)
  {// with the increase in anlog value the current through the circuit increases    
  analogWrite(led, i); 
    delay(100);
    Serial.println(i);
  }
}