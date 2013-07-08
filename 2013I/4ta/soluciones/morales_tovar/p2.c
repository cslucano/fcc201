#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void copiar(char origen[100], int inicio, int longitud)
{
	char resultado[100];
	int i, a;
	a = strlen(origen);
	for (i = inicio; i < a; i++){
		resultado[i-inicio]=origen[i];
	}
	puts(resultado);
}

void borrar(char origen[100], int inicio, int longitud)
{
	char resultado[100];
	int i, a;
	a = strlen(origen) - longitud;
	for (i = inicio; i < a; i++){
		resultado[i-inicio]=origen[i];
	}
	puts(resultado);

}
int main()
{
	int inicio, longitud;
	char opc;
	char frase[100];
	printf("Ingrese una frase: ");
	gets(frase);
	do{ 
		puts("\t\tMENU");
		puts("Escriba c para copiar");
		puts("Escriba b para borrar");
		puts("Escriba s para salir");
		scanf("%c", &opc);
		if (opc == 'c' || opc == 'b' || opc == 's'){
			switch (opc){
				case 'c': 	puts("Funcion copiar....");
							printf("ingrese los parametros de inicio y longitud\n");
							printf("inicio: ");
							scanf("%d", &inicio);
							printf("longitud: ");
							scanf("%d", &longitud);
							copiar(frase,inicio, longitud);
							break;
				case 'b': 	puts("Funcion borrar....");
							printf("ingrese los parametros de inicio y longitud\n");
							printf("inicio: ");
							scanf("%d", &inicio);
							printf("longitud: ");
							scanf("%d", &longitud);
							borrar(frase,inicio, longitud);
							break;
				case 's': 	printf("gracias!, usted esta saliendo del programa\n");
							break;
			}
		}	
		else
			puts("Ingrese una opción válida");
	} while (opc != 's' && opc != 'b' && opc != 'c');
	return 0;
}
