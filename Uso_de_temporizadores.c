#include <stdio.h>
#include <stdlib.h>
#include <8051.h>

int main()
{
  // Configura el temporizador 0 en modo CTC
  set_timer_mode(0, T0_MODE_CTC);

  // Establece el valor de recarga del temporizador 0 en 255
  set_timer_reload(0, 255);

  // Establece el preescalador del temporizador 0 en 1
  set_timer_prescaler(0, 1);

  // Inicia el temporizador 0
  start_timer(0);

  while (1)
  {
    // Instrucción a ejecutar
  }

  return 0;
}
/*Brayan Ceballos*/