#include <stdio.h>
#include <wiringPi.h>

int main() {
  // Inicializa wiringPi
  wiringPiSetup();

  // Configura el pin 2 como entrada
  pinMode(2, INPUT);

  // Lee el valor del sensor de temperatura
  int temperatura = digitalRead(2);

  // Imprime el valor de la temperatura
  printf("Temperatura: %d\n", temperatura);

  return 0;
}
