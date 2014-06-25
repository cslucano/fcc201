#include <stdlib.h>
#include <stdio.h>

typedef struct nodo 
{
  struct nodo * siguiente;
  int valor;
} Nodo;


typedef struct 
{
  float x;
  float y;
} XY;

int main()
{
  XY p1 = { 4, 5 };
  printf("(%g, %g)\n", p1.x, p1.y);


  XY *p2 = (XY *)malloc(sizeof(XY));
  p2->x = 232,232;
  p2->y = 13,21;
  printf("(%.2g, %.2g)\n", p2->x, p2->y);


  Nodo * n1 = (Nodo *)malloc(sizeof(Nodo));
  n1->valor = 10;
  n1->siguiente = NULL;

  Nodo * n2 = (Nodo *)malloc(sizeof(Nodo));
  n2->valor = 5;
  n2->siguiente = NULL;

  n1->siguiente= n2;

  Nodo * n3 = (Nodo *)malloc(sizeof(Nodo));
  n3->valor = 25;
  n3->siguiente = NULL;

  n2->siguiente= n3;

  Nodo * n;
  n = n1;
  while(n->siguiente != NULL)  
  {
    printf("%d", n->valor);
    n = n->siguiente;
    printf("->%d\n", n->valor);
  }

  return 0;
}
