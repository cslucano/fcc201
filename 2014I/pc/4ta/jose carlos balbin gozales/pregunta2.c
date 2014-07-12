#include <stdio.h>
#include <stdlib.h>
 
void copiarcadena (char*,char*);

int main(){
char cadena1[100], cadena2[100];

printf ("introduce una cadena:\n");
gets (cadena1);
copiarcadena (cadena1,cadena2);
puts (cadena2);

return 0;
}
 
void copiarcadena (char*c1, char*c2){
       while(*c1!='\0'){
	*c2=*c1;
	c1++;
	c2++;
	}
       *c2='\0';
}
