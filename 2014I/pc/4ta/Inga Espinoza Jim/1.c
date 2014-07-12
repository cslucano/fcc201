#include <stdio.h>


int obetenerEntero(int * valor)
{
    if(*valor>=0)
    {
        printf("+%d\n",*valor);
    }
    else
    {
        printf("%d\n",*valor);
    }
}

 int main()
{
    int n;
    printf("Ingrese numero en formato +/-{numero}: ");
    scanf("%d",&n);
    obetenerEntero(&n);

 return 0;
}
