#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,m,n,p;
     printf("ingrese las coordenadas de los centros y despues los radios de las circunferencias espectivamente\n);
     scanf("%f %f %f %f %f %f %f",&a,&b,&c,&m,&n,&p);
     if((a==b) && (c==m))
        { if(n==p)
          printf("si son la misma circuferencia\n");
        }
     if((n<p) && (sqrt(pow(a-c)+pow(b-m))<n))
         printf("un circunferencia se encuentra dentro de la otra\n");
     if( sqrt(pow(a-b)+pow(b-m))<(n+p))
       printf("el numero de cortes entre las circunferencias es 2\n");
   return 0;
   }
