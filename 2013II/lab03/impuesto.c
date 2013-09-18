#include <stdio.h>
#include <stdlib.h>

int main(){
    float monto;
    char prefijo;
    int prefijo_valido;

    float precio_bruto;
    float igv;
    float precio_final;
    while(scanf("%c %f",&prefijo, &monto)!=EOF){
		prefijo_valido = 1;

        if( prefijo == 'E' || prefijo == 'S' || prefijo == 'C')
        {
		    prefijo_valido = 1;
        }
		else
        {
	    	prefijo_valido = 0;
        }

        if( prefijo_valido )
		{
		    switch(prefijo)
		    {
    	    	case 'E':
		            precio_bruto = monto;
		            igv = 0;
		            precio_final = precio_bruto + igv;
		            break;
		        case 'S':
		            precio_bruto = monto;
		            igv = monto * 18 / 100;
		            precio_final = precio_bruto + igv;
		            break;
		        case 'C':
		            precio_bruto = monto / (1 + 18/100.0 );
		            igv = monto - precio_bruto;
		            precio_final = monto;
		            break;
		    }
		    printf("%g %g %g\n", precio_bruto, igv, precio_final);
		}
    }	
    return 0;
}
