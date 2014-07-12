//Encontrar el ngram de una palabra, para n = 1, .., longitud de la palabra y ordenarlo lexicográficamente.
#include <stdio.h>
#include <string.h>


int main()
{
    int *puntero[80]; //array de puntero
    char palabra_ingresada[80];
    char palabra_nueva[80][80];
    int i,j,l,k,A,num_palabras,n;
    int cont,m=0;
    int tam_p;//tamaño de la palabra

    printf("escribe la palabra:\n");
    scanf("%s",palabra_ingresada);

    k=0;
    while (palabra_ingresada[k++]!='\0');//aqui saca el numero de letras
    n=k-1;
    A=n;    //n=número de letras de la palabra
    num_palabras=(n*(n+1))/2;
    tam_p=1;    //inicia el tamaño de palabra en 1 hasta n,luego se incrementa y se hace tamaño de palabra=2 y asi hasta que tamaño de palabra=n
    cont=0;
    for(l=0;l<num_palabras;l++)
    {
        if(cont==A)
        {
            A=n--;
            tam_p++;
            cont=-1;
            m=0;
        }
        else if(cont<A)
        {
           for(i=0,j=m  ;i<tam_p,j<m+tam_p  ;i++,j++)
           {
               palabra_nueva[l][i]=palabra_ingresada[j];
               m++;
           }
           printf("%s \n",palabra_nueva[l]);//imprime las palabras

        }
    }

}
