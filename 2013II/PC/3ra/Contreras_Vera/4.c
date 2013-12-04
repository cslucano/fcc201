#include <stdio.h>
#define TRUE 1
#define FALSE 0
int SacarRepetidos(int arreglo[], int nuevo[], int tam)
{
int i, j, c = 0;
int repetido;
for (i=0;i<tam;i++){
for (j=0;j<c;j++){
repetido = FALSE;
if (arreglo[i]==nuevo[j]){
repetido = TRUE;
break;
}
}
if (!repetido){
nuevo[c++] = arreglo[i];
}
}
return c;
}

int main(){
int arreglo[10]={1,1,1,2,3,3,10,10,11,11};//tiene 6 elementos
int nuevo[10];//reservamos memoria para 6 elementos, aunque no se usen todos
int max = SacarRepetidos(arreglo, nuevo, 10);
int i;
for (i=0; i < max; i++){
printf("Valor: %i \n" ,nuevo[i]);
}
}
