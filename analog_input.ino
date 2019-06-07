int ldr;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 ldr=analogRead(A0);
Serial.print("LDR VALUE:");
Serial.println(ldr);
delay(500);
}
