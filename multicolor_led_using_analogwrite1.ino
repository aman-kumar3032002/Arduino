// for using analogWrite function you should always use pwm pins 

int rled = 9;   //red led
int bled = 10;   // blued led
int gled = 11;   // green led

void setup()
{
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
  pinMode(bled, OUTPUT);
}

void loop()
{
  // creating white color
 analogWrite(rled,255);
  analogWrite(gled,255);
  analogWrite(bled,255);
  delay(1000);
  
  // creating red color
  analogWrite(rled,255);
  analogWrite(gled,0);
  analogWrite(bled,0);
  delay(1000);
  
  //creating yellow color
  analogWrite(rled,255);
  analogWrite(gled,255);
  analogWrite(bled,0);
  delay(1000);
  
  //creating maroon color
  analogWrite(rled,128);
  analogWrite(gled,0);
  analogWrite(bled,0);
  delay(1000);
  
  //creating  purple color
  analogWrite(rled,128);
  analogWrite(gled,0);
  analogWrite(bled,128);
  delay(1000);
  
  
}