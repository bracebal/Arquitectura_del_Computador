// Configura el puerto P0 como salida

set_port(0, 1);

// Estabiliza el puerto P0

for (int i = 0; i < 10000; i++);

// Enciende el bit 0 del puerto P0

set_bit(0, 0);

// Espera 1 segundo

delay_ms(1000);

// Apaga el bit 0 del puerto P0

clear_bit(0, 0);
