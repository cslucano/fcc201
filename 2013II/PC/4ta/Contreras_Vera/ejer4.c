#include <stdio.h>
#include <stdlib.h>

void orden( int *matriz, const int nSize )
{int pasada=0;
   for ( pasada = 0; pasada < nSize - 1; pasada++ )
   {int k=0;
      for ( k = 0; k < nSize - 1; k++ )
      {
         if ( matriz[ k ] > matriz[ k + 1 ] )
         {
            swap( &matriz[ k ], &matriz[ k + 1 ] );
         }
      }
   }
} 
 
void swap( int * const ptrElemento1, int * const ptrElemento2 )
{
   int mantiene = *ptrElemento1;
   *ptrElemento1 = *ptrElemento2;
   *ptrElemento2 = mantiene;
}
int main(int argc, char *argv[]) {
float *vect1, n,m;int i;
printf("N£mero de elementos del vector: ");
scanf("%f", &n);
vect1 = malloc(n * sizeof(int));
if (vect1  == NULL) {
 printf("error al reservar memoria");       
}
for(i=0;i<(int)n;i++)
{printf("ingrese el elemento %d :",i);
scanf("%f",&m);
*(vect1+i)=m;
}
   orden( vect1,n-1);  // ordena el arreglo y despues lo imprimimos
for(i=0;i<(int)(n-1);i++)
{printf("el elemento %p :",(vect1+i));

}
free(vect1);
vect1= NULL;
	return 0;
}
