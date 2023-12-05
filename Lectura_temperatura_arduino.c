void setup() {
  // Inicializa el ADC
  ADC.begin();
}

void loop() {
  // Lee el valor del sensor de temperatura
  int temperatura = analogRead(A0);

  // Imprime el valor de la temperatura
  Serial.println(temperatura);
}
