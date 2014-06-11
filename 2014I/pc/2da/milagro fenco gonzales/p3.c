# include <stdio.h>
# include <math.h>
void imprimir (int n);
int main(){
   int n;
   printf("Ingrese n:");
   scanf("%d",&n);
   Imprimir (n);
   return 0;
   }
   void Imprimir (int n){
   int prim,seg,ter,i,s=0;
   prim=0;
   puts ("0");
   seg = 1 ;
   puts ("1");
   i=2;
   s=1;
   while(i<n){
   ter= prim + seg;
   printf ("%d\n",ter);
   s = S + ter;
   i=i+1;
   prim=seg;
   seg= ter;
   }
   printf ("La suma es: %d\n",s);
   }
   
   
