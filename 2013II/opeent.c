#include <stdio.h>
#include <stdlib.h>

int main() {
   // declaraciones
   int a;
   int b;
   int c;
   float x;
   //inicializaciones
   a = 4;
   b = 5;
   //asignacion
   c = a + b;
   //impresion
   printf("%d + %d = %d\n", a, b, c);
   //asignacion
   c = a - b;
   //impresion
   printf("%d - %d = %d\n", a, b, c);
   //asignacion
   c = a * b;
   printf("%d * %d = %d\n", a, b, c);
   //asignacion
   c = a / b;
   printf("%d / %d = %d\n", a, b, c);
   //asignacion
   c = a % b;
   printf("%d %% %d = %d\n", a, b, c);
   //asignacion
   x = (float)a / b;
   printf("%d / %d = %g\n", a, b, x);
   return 0;
}
