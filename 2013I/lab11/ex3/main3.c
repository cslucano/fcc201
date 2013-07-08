#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ex3.h"

int main()
{
  // Declaración e inicialización de la variable z1 de tipo complejo
  struct complejo * z1 = (struct complejo *)malloc(sizeof(struct complejo));
  struct complejo * z2 = (struct complejo *)malloc(sizeof(struct complejo));
  z1->x = 1;
  z1->y = 2;
  z2->x = 3;
  z2->y = 4;
  struct complejo * z3 = NULL;
  struct rectangulo * r1 = (struct rectangulo *)malloc(sizeof(struct rectangulo));
  r1->z1 = z1;
  r1->z2 = z2;
  printf("(%.2f, %.2f)\n", z1->x, z1->y );
  printf("(%.2f, %.2f)\n", z2->x, z2->y );
  printf("&z3: %p\n", z3 );
  z3 = sumar(z1, z2);
  printf("&z3: %p\n", z3 );
  printf("(%.2f, %.2f)\n", z3->x, z3->y );
//  printf("modulo(%.2f, %.2f) : %.2f\n", z3.x, z3.y, modulo(z3) );
  printf("área de r1{(%.2f, %.2f), (%.2f, %.2f) } : %.2f\n", r1->z1->x, r1->z1->y, r1->z2->x, r1->z2->y, area(r1) );
  test();
  return 0;
}


