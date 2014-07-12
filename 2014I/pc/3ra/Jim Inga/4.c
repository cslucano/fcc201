#include <stdio.h>

void eliminarduplicados(int arr[100],int n) {
    int i,j,z,suma;

    for(i=0;i<n-1;i++){
     printf("%d",arr[0]);
		for(j=0;j<i;j++){
		if(arr[i]==arr[j]){
			}
		else
		printf("%d",arr[i]);
   		}
		}

}

int main(){
int n,i;
int arr[100];
	

	printf("tamaño del arreglo:  \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	arr[i]=rand()%10;
		}	
	eliminarduplicados(arr,n);

return 0;
}

