#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int funcion_encontrar(char* vect,int tam){
	char aux;	
	int i, j;	

	for(j=1;j<4;j++){
		for(i=1;i<tam;i++){	
		aux = vect[i];
		aux+=j;
		vect[i]=aux;
		}
		printf("%s\n",vect);
			
	
	}

return j;
}




void main(){
	int i, j, tam;
	char aux;
char v[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char vect[]="LEGREXIRDRVJLEKVOKFHLVTFEKZVEVKFURJCRJCVKIRJUVCRSVTVURIZFLEVAVDGCFVJTRURMVQHLVKIRSRAFWVCZODVGRXRLENYZJBP";

	tam=strlen(vect);

	funcion_encontrar(vect,tam);
	
	



}
