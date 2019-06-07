int setuo()
void setup() {
  // put your setup code here, to run once:
  pinMode(D0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
state=digitalRead(D0);
Serial.print(state);
delay(500);
}
