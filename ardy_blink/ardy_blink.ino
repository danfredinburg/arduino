int led = 9;

void setup() {
  // put your setup code here, to run once:
 pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
}
