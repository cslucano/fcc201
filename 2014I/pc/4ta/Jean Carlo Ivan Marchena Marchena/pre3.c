#include <stdio.h>
#include <string.h>

int cadenasufijo(char*s, char* t)
{
int a,b;
int nu1,nu2,cont=0;
    a=0;
    while (s[a++]!='\0');
    nu1=a-1;
    a=0;
    while (t[a++]!='\0');
    nu2=a-1;

    if(nu1>=nu2)
    {
        cont=0;
        a=0;
        b=0;
        for(a=nu1-1,b=nu2-1; a>nu1-nu2-1,b>=0; a--,b--)
        {
           if(t[b]==s[a])
           {
              cont=cont+1;
           }
        }
        if(nu2==cont)
        {
            return 1;

        }
        else
            return 0;

    }
    else
        return 0;

       printf("\n");

}


int main (void) {
char s[21],p[21],aux1[20],aux2[20];
int val;

    printf("primera palabra:");
    scanf("%s",p);
    printf("segunda palabra:");
    scanf("%s",s);

    val=cadenasufijo(p, s);
    if(val==1)
     printf("%s es sufijo de %s \n",s,p);

    if(val!=1)
    printf("%s no es sufijo de %s \n",s,p);

    return 0;

}
