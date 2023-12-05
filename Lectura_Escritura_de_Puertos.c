/*Lectura y Escritura de datos en puertos en C*/

#include <stdio.h>
#include <stdlib.h>
#include <8051.h>

int main()
{
  uint8_t dato;

  // Lee el dato del puerto P1.0
  dato = inp(P1.0);

  // Escribe el valor 1 en el puerto P1.0
  outp(P1.0, 1);

  while (1)
  {
    // Instrucción a ejecutar
  }

  return 0;
}
/*Brayan Ceballos*/