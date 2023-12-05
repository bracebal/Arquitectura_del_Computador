void main() {
  // Configura el puerto 0 como salida
  set_port(0, 1);

  // Bucle infinito
  while (1) {
    // Si el bit 0 del puerto 0 está activo, enciende el motor
    if (get_bit(0, 0)) {
      set_bit(0, 1);
    } else {
      clear_bit(0, 1);
    }
  }
}
