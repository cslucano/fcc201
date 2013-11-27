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
int arreglo[]={1,4,5,1,3,5};//tiene 6 elementos
int nuevo[6];//reservamos memoria para 6 elementos, aunque no se usen todos
int max = SacarRepetidos(arreglo, nuevo, 6);
int i;
for (i=0; i < max; i++){
printf("Valor: %i \n" ,nuevo[i]);
}
}
