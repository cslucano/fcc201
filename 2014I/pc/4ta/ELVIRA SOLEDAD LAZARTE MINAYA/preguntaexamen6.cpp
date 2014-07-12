#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#define PI 3.14151617

 struct Punto {
 float x, y;
 };

 float angulo(struct Punto p1,struct Punto p2)
 {
    float m1,m2;
    float n,cos,tet;
    float a;
    m1=sqrt((p1.x)*(p1.x)+(p1.y)*(p1.y));
    m2=(p2.x)*(p2.x)+(p2.y)*(p2.y);
    n=(p1.x)*(p2.x)+(p1.y)*(p2.y);
    cos=n/(m1*m2);
    tet=((180)*acos(cos))/PI;
    return tet;
 
 }

 int main(void)
 {
 struct Punto p1,p2;
 scanf("%f",&p1.x);
 scanf("%f",&p1.y);
 scanf("%f",&p2.x);
 scanf("%f",&p2.y);
 printf ("el angulo: %.2f\n", angulo(p1,p2));
 system("pause");
 return 0;

}
