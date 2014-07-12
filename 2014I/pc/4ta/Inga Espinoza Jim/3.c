//La función cadenasufijo(char* s, char* t) retorna un valor entero.
//devuelve 1 si la cadena t es sufijo de la cadena s.devuelve 0 si t no es sufijo de s..
#include <stdio.h>
#include <string.h>

int cadenasufijo(char*s, char* t)
{
int i,j,numlet1,numlet2,cont=0;


    i=0;                    //a partir de aqui contamos el numero de letras de la palabra
    while (s[i++]!='\0');
    numlet1=i-1;
    i=0;
    while (t[i++]!='\0');
    numlet2=i-1;

    if(numlet1>=numlet2)    //si la 2da palabra tiene mas letras entonces retorna el valor de 0,sin analizar mas
    {
        cont=0;
        for(i=numlet1-1,j=numlet2-1; i>numlet1-numlet2-1,j>=0; i--,j--)//probaremos la igualdad de letra por letra desde la ultima letra hasta el inicio
        {
            //aux1[i]=s[i];
            //aux2[j]=t[j];
           if(t[j]==s[i])
            //if(aux2[j]=aux1[i])
           {
              cont=cont+1;
           }
        }
        if(numlet2==cont)   //
        {
            return 1;
        }
        else
            return 0;
    }
    else
        return 0;
}


int main (void) {
    char pal2[21],pal1[21],aux1[20],aux2[20];
    int val;

    printf("escribe palabra 1:");
    scanf("%s",pal1);
    printf("escribe palabra 2:");
    scanf("%s",pal2);
    printf("\n");

    val=cadenasufijo(pal1, pal2);//llamada a la funcion

    if(val==1)
    {
     printf("retorno el valor de %d \n",val);
     printf("%s es sufijo de %s \n",pal2,pal1);
    }
    else
    {
    printf("retorno el valor de %d \n",val);
    printf("%s no es sufijo de %s \n",pal2,pal1);
    }
    return 0;
}
