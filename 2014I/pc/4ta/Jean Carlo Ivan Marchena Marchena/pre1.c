#include <stdio.h>


int obetenerEntero(int * valor)
{

    if(* valor >= 0)
        printf("+%d\n",*valor);

    if(* valor <0)
        printf("%d\n",*valor);

}

 int main()
{
    int p;
    printf("Escriba numero en formato +/-{numero}: ");
    scanf("%d",&p);
    obetenerEntero(&p);

    return 0;
}
