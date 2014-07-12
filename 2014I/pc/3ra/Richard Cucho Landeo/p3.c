#include<stdio.h>
void Sumadedosmasgrandes(int arrInts[1000],int tamano) {
    int a,j,z,sumayores;
    for(a=0;a<tamano-1;a++){
        for(j=a+1;j<tamano;j++){
            if(arrInts[j]<arrInts[a]){
                    z=arrInts[a];
                    arrInts[a]=arrInts[j];
                    arrInts[j]=z;
              }
           }
       }
    for(a=0;a<tamano;a++)
          printf("%d  ",arrInts[a]);
    printf("\n");
	sumayores=arrInts[tamano-1]+arrInts[tamano-2];
	printf("suma es %d\n",sumayores);
}
int main(){
int tamano,a,arrInts[1000];
	printf("Agregar dimension del arreglo:  \n");
	scanf("%d",&tamano);
	for(a=0;a<tamano;a++)
	   arrInts[a]=rand()%100;
	Sumadedosmasgrandes(arrInts,tamano);

return 0;
}

