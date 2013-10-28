#include <stdio.h>

int main(void)
{
 int M, N, A, B, C, D;

 printf("Ingrese un numero de 4 cifras:\n");
 scanf("%d", &N); 

 A = N/1000;
 B = (N/100)%10;
 C = (N/10)%10;
 D = N%10;

 if (B<5)
 {
  if (C>=5)
  {
   D = 0; C = 0; B = B+1; A = A;   
  }
 
  else
  {
   D = 0; C = 0; B = B; A = A;
  }
 } 
 else
 {
  if (B<9)
  {
   D = 0; C = 0; B = B+1; A = A;
  }

  else
  {
   D = 0; C = 0; B = B+1; A = A+1;
  }
 }

 M = (A*1000) + (B*100) + (C*10) + D;

printf("%d\n", M);

return 0;
}
