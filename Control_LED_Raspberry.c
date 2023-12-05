#include <stdio.h>
#include <wiringPi.h>

int main() {
  // Inicializa wiringPi
  wiringPiSetup();

  // Configura el pin 17 como salida
  pinMode(17, OUTPUT);

  // Enciende el LED
  digitalWrite(17, HIGH);
  delay(1000);

  // Apaga el LED
  digitalWrite(17, LOW);
  delay(1000);

  return 0;
}
