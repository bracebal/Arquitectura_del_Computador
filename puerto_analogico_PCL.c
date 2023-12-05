void main() {
  // Configura el puerto 0 como entrada
  set_port(0, 0);

  // Bucle infinito
  while (1) {
    // Lee el valor del sensor de temperatura
    int temperatura = read_adc(0);

    // Imprime el valor de la temperatura
    printf("Temperatura: %d\n", temperatura);
  }
}
