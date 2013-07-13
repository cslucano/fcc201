#include<stdio.h>
#define TAM 40
#define MAXCAR 9
typedef char Cadena[MAXCAR+1];
      
typedef struct{
        Cadena palo;
        int valor;
} Carta;


Carta crearBaraja(){
        Carta a1;
        puts(a1.palo);
        scanf("%d",&a1.valor);
        return a1;
}

void imprimirBaraja(Carta Baraja){
       Carta a1;
       gets(a1.palo);
       printf("%c",a1.valor);
}

void ordena_baraja(Baraja b, int ncartas){
     int i;
     for(i=0;i<ncartas;i++)
        
} 

         
int main(){
    int i,ncartas;
    Carta a1[TAM];
    printf("ingrese cuantas cartas  necesita");
    scanf("%d",&ncartas);
    for(i=0;i<ncartas;i++)
    a1[i]=crearBaraja();
    
    for(i=0;i<ncartas;i++)
    imprimirBaraja(*a1);
    
    
return 0;
}

