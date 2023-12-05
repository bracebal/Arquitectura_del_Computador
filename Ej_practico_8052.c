void setup_timer0() {
  // Configura el temporizador 0
  set_timer0(0, 128, 0);
}

// Inicia el temporizador 0
void start_timer0() {
  TR0 = 1;
}

// Detiene el temporizador 0
void stop_timer0() {
  TR0 = 0;
}

// Obtiene el valor actual del temporizador 0
uint8_t read_timer0() {
  return TH0;
}
