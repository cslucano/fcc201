
#include<stdio.h>


char numero[100];

int charaint(char x){
if(x=='0') return 0;    
else if(x=='1') return 1;
else if(x=='2') return 2;
else if(x=='3') return 3;
else if(x=='4') return 4;
else if(x=='5') return 5;
else if(x=='6') return 6;
else if(x=='7') return 7;
else if(x=='8') return 8;
else if(x=='9') return 9;

}

void obtenerfloat(float* valor){
float aux=0.0;
int i=1;
//parte no decimal
while(numero[i]!='.'){
 aux+=charaint(numero[i]);
 aux*=10.0;   
 i++;                  
}
aux/=10.0;i+=1;
//parte decimal
float dec=10.0;
while(numero[i]!='\0'){
 aux+=charaint(numero[i])/dec;                      
 dec*=10;
 i++;
}

if(numero[0]=='+') aux*=(1);     
else               aux*=(-1);     

*valor = aux;
}



int main(){
    
float x;
gets(numero);
obtenerfloat(&x);
printf("%f\n",x);
return 0;
    

}
