#define RELAY_PIN_1 3 // Pin no 3

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN_1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Relay ON");
  digitalWrite(RELAY_PIN_1, LOW);
  delay(2000);

  Serial.println("Relay OFF");
  digitalWrite(RELAY_PIN_1, HIGH);
  delay(2000);
}
