// Configuración de puertos

void set_port(uint8_t port, uint8_t direction) {
  // Configura el puerto especificado como entrada o salida

  if (direction == 0) {
    // Entrada
    PCON |= (1 << (port + 5));
  } else {
    // Salida
    PCON &= ~(1 << (port + 5));
  }
}

// Acceso a bits de puertos

uint8_t get_bit(uint8_t port, uint8_t bit) {
  // Obtiene el valor del bit especificado del puerto especificado

  return (Px >> bit) & 1;
}

void set_bit(uint8_t port, uint8_t bit) {
  // Establece el valor del bit especificado del puerto especificado a 1

  Px |= (1 << bit);
}

void clear_bit(uint8_t port, uint8_t bit) {
  // Establece el valor del bit especificado del puerto especificado a 0

  Px &= ~(1 << bit);
}

// Configuración de temporizadores

void set_timer0(uint8_t mode, uint8_t prescaler, uint8_t initial_value) {
  // Configura el temporizador 0

  TMOD &= ~(0x0F);
  TMOD |= mode;
  TCON &= ~(0x0F);
  TCON |= prescaler;
  TH0 = initial_value;
  TL0 = initial_value;
}

void start_timer0() {
  // Inicia el temporizador 0

  TR0 = 1;
}

void stop_timer0() {
  // Detiene el temporizador 0

  TR0 = 0;
}

uint8_t read_timer0() {
  // Obtiene el valor actual del temporizador 0

  return TH0;
}

void set_timer1(uint16_t mode, uint16_t prescaler, uint16_t initial_value) {
  // Configura el temporizador 1

  TMOD &= ~(0xF0);
  TMOD |= mode;
  TCON &= ~(0xF0);
  TCON |= prescaler;
  TH1 = (initial_value >> 8) & 0xFF;
  TL1 = initial_value & 0xFF;
}

void start_timer1() {
  // Inicia el temporizador 1

  TR1 = 1;
}

void stop_timer1() {
  // Detiene el temporizador 1

  TR1 = 0;
}

uint16_t read_timer1() {
  // Obtiene el valor actual del temporizador 1

  return (TH1 << 8) | TL1;
}