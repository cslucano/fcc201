#include <stdio.h>


int main(){

int A, B, C, D;

 printf("ingrese los 4 digitos del entero por separado\n");
 printf("tienen que ser enteros y positivos\n");
 scanf("%d%d%d%d",&A,&B,&C,&D);

 if(B==9){
	
	if(C>=5){
		A++;
		printf("el numero redondeado es %d000\n",A);
                }
	else{
	     B++;
	     printf("el numero redondeado es %d%d00\n",A,B);
	     }
        }		
 else {
	if(C>=5){
	B++;
	printf("el numero redondeado es %d%d00\n",A,B);
		}	
	else{
        printf("el numero redondeado es %d%d00\n",A,B);   
            }
       }


return 0;
}
