void setup() {
  // Configura el pin 13 como salida
  pinMode(13, OUTPUT);
}

void loop() {
  // Enciende el LED
  digitalWrite(13, HIGH);
  delay(1000);

  // Apaga el LED
  digitalWrite(13, LOW);
  delay(1000);
}
