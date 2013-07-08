#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "ex3.h"

struct complejo * sumar(struct complejo * u, struct complejo * v)
{
  struct complejo * w = (struct complejo *)malloc(sizeof(struct complejo));
  w->x = u->x + v->x;
  w->y = u->y + v->y;
  return w;
}

float modulo(struct complejo * z)
{
  float r;
  r = sqrt(z->x*z->x + z->y*z->y);
  return r;
}

float area(struct rectangulo * r1)
{
  return abs(r1->z2->x - r1->z1->x)*abs(r1->z1->y-r1->z2->y);
}

void test()
{
  struct complejo z1 = { 1, 2 };
  struct complejo z2 = { 3, 4 };
  struct complejo * z3;
  z3 = sumar(&z1, &z2);
  assert(z3->x == 4);
  assert(z3->y == 6);
}
