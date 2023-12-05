void setup_port() {
  // Configura el puerto P0 como salida
  set_port(0, 1);

  // Enciende el bit 0 del puerto P0
  set_bit(0, 0);
}
