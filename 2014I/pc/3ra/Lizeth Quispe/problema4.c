#include <stdio.h>

int eliminarDuplicados(int arr[],int n){
	int cont = 0;
	int i,j;
	
	for(i=0;i<n;i++){
			if(arr[i]==arr[i+1]){
				for(j=i+1;j<n-1;j++){
					arr[j]=arr[j+1];
					}
			}	
			else{
				cont++;
			}
		}
	
	return cont;
	
	}
int main(){
	int arr[15]={1,2,3,3,4,5,5,6,7,8,8,9,11,11,12};
	int cont,i;
	for(i=0;i<15;i++){
		printf("%d  ",arr[i]);
		}
	cont=eliminarDuplicados(arr,15);
	
	puts(" ");
	printf("No duplicados %d\n",cont);
	
	for(i=0;i<(15+cont)/2;i++){
		printf("%d  ",arr[i]);
		}
	return 0;
	}
