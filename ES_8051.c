void set_port(uint8_t port, uint8_t direction) {
  // Configura el puerto especificado como entrada o salida

  if (direction == 0) {
    // Entrada
    DDRx &= ~(1 << x);
  } else {
    // Salida
    DDRx |= (1 << x);
  }
}
