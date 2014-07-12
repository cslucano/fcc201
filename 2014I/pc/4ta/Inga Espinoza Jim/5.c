#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    double G,x1,x2,y1,y2,m1,m2,F,distancia_al_cuadrado;

    printf("masa m1:  ");
    scanf("%lf",&m1);
    printf("componente x1:  ");
    scanf("%lf",&x1);
    printf("\ncomponente y1:  ");
    scanf("%lf",&y1);
    printf("\nmasa m2:  ");
    scanf("%lf",&m2);
    printf("componente x2:  ");
    scanf("%lf" ,&x2);
    printf("\ncomponente y2;  ");
    scanf("%lf" ,&y2);

    G=6,674*pow(10,-11);

    distancia_al_cuadrado=(pow(x2-x1,2))+(pow(y2-y1,2));

    F=(-1*G)*(m1*m2)/(distancia_al_cuadrado);
    printf("\nla fuerza es = %lf\n",F);
return 0;
}
