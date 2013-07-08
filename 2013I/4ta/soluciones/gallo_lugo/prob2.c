	#include<stdio.h>
	#define tam 25

typedef struct frase{
		
		char origen[tam+1];
		char resultado[tam+1];
		
		};

void copiar(struct frase A*,int a,int b);
void borrar(struct );


int main(){

	puts("MENU");
	puts("(1) copiar");
	puts("(2) borrar");
	puts("(3) salir");

	switch(ope){
	
		case '1':
					int a,b;
					struct frase A;
					printf("Nombre = ");
					gets(A.origen);
					printf("ingrese inicio(a) y longitud(b): ");
					scanf("%d %d",&a,&b);
					
					copiar(origen,a,b);
					
					break;
		
		case '2':
					borrar();
					break;
		
		case '3':	
					break;
		
	}

	return 0;
	
}

void copiar(struct frase A*,int a,int b){
	
	int v[tam];
	v[tam]=origen[tam+1];
	
	
	
}

void borrar(){

}


