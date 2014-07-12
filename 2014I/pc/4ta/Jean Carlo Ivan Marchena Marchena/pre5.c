#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    double x1,x2,y1,y2,masa1,masa2,f,dcuadrado,g;
    g=6,674*pow(10,-11);

    printf("Escribe masa1,componente x1,componente y1 :  ");
    scanf("%lf %lf %lf",&masa1,&x1,&y1);

    printf("Escribe masa1,componente x2, componente y2:  ");
    scanf("%lf %lf %lf",&masa2,&x2, &y2);
    dcuadrado=(pow(x2-x1,2))+(pow(y2-y1,2));

    f=(-g)*(masa1*masa2)/(dcuadrado);
    printf("la fuerza es = %lf",f);
return 0;
}
