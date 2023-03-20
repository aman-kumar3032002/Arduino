int gas = A0;
int gasValue;
void setup()
{
  pinMode(gas, INPUT);
  Serial.begin(9600);
}

void loop()
{
  gasValue=analogRead(gas);
  Serial.print("Gas density : ");
  Serial.println(gasValue);

}