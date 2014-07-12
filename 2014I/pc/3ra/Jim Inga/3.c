#include <stdio.h>

void Sumadedosmasgrandes(int arrInts[100],int tamano) {
    int i,j,z,suma;
    int vector[tamano];

    for(i=0;i<tamano-1;i++){
        for(j=i+1;j<tamano;j++){
            if(arrInts[j]<arrInts[i]){
                    z=arrInts[i];
                    arrInts[i]=arrInts[j];
                    arrInts[j]=z;
            }
        }
    }

    for(i=0;i<tamano;i++){
            printf("%d  ",arrInts[i]);}

    printf("\n");
	suma=arrInts[tamano-1]+arrInts[tamano-2];
	printf("suma es %d\n",suma);

}

int main(){
int tamano,i;
int arrInts[100];
	

	printf("tamaño del arreglo:  \n");
	scanf("%d",&tamano);
	for(i=0;i<tamano;i++){
	arrInts[i]=rand()%10;
		}	
	Sumadedosmasgrandes(arrInts,tamano);

return 0;
}

