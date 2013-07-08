	#include<stdio.h>
	#define tam 80


int main(){
	
	struct amigo{

		char nombre[tam+1];
		char apellido1[tam+1];
		char apellido2[tam+1];
	
	};
	
	struct amigo A;
	
	puts("\ningrese los datos");
	printf("Nombre = ");
	gets(A.nombre);
	printf("apellipo1 = ");
	gets(A.apellido1);
	printf("apellido2 = ");
	gets(A.apellido2);
	
	puts("\nel codigo sera:");
	printf("%.3s%.3s%.3s\n",A.apellido1,A.apellido2,A.nombre);



	
return 0;

}
