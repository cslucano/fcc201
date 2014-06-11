# include <stdio.h>
int Mcd (int a, int b)
{
while (a!=b)
{
if (a>b)
   a-=b;
 else
   b-=a;
  }
  return a;
  }
  int main (void)
      int n1, n2,n3,mcd;
  printf ("Introduce tres numeros separados\",\":");
  scanf("%d,%d,%d",&n1, &n2,&n3);
  mcd=Mcd(n1,n2);                                                                                                                        
  mcd=Mcd(n3,mcd);
  printf("El maximo comun divisor de %d, %d y %d es %d\n", n1,n2,n3,mcd);
  return 0;
  }                                                                                                               
