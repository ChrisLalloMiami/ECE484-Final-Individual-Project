const int INTERRUPT_PIN = 2;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 400;

void setup() {
  Serial.begin(9600);
  pinMode(INTERRUPT_PIN, INPUT);
  attachInterrupt(digitalPinToInterrupt(INTERRUPT_PIN), react, RISING);
}

void loop() {
}

void react() {
  if (millis() - lastDebounceTime > debounceDelay) {
    int state = digitalRead(INTERRUPT_PIN);
    if (state == HIGH) {
      Serial.println("Triggered!");
    }
    lastDebounceTime = millis();
  }
}
