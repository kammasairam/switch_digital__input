int i;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<1024;i++)
{
  analogWrite(D0,i);
  delay(10);
  Serial.println(i);
}
for(i=1023;i>0;i--)
{
analogWrite(D0,i);
delay(10);
Serial.println(i);
}
}
