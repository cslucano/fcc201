#include <stdio.h>
#include <stdlib.h>

struct complejo
{
  float x;
  float y;
};

struct rectangulo
{
  struct complejo * z1;
  struct complejo * z2;
};

struct complejo * sumar(struct complejo * u, struct complejo * v);

float modulo(struct complejo * z);

float area(struct rectangulo * r1);

void test();
