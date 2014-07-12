#include<stdio.h>
#define t 100

int main(){
int m[t]={ 1, 2, 3,4,5,6,8,9};
int i,j,cont;

for(i=0;i<t;i++){
	//m[i]=rand()%100;
}

for(i=1;i<=8;i++){
	cont=0;
	for(j=0;j<8;j++){
		if(m[j]!=i){
		cont=cont+1;
			}
			}
	if(cont==8){
		printf("%d no esta en el arreglo\n",i);
	}
}

return 0;
}
