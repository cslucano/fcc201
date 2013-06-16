#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,r1,x2,y2,r2,d,l1,l2;
    printf("(x1;y1)=");
    scanf("%f%f",&x1,&y1);
    printf("r1=");
    scanf("%f",&r1);
    printf("(x2;y2)=");
    scanf("%f%f",&x2,&y2);
    printf("r2=");
    scanf("%f",&r2);
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    l1=sqrt(pow((d-r1),2));
    l2=sqrt(pow((d-r2),2));
    if((x1==x2)&&(y1==y2)&&(r1==r2))
        printf("Son las mismas circunferencias\n");
    if(d==r1+r2)
        printf("Se cortan en un punto\n");
    if((d+r1<=r2)&&(d<r1+r2)&&(r1!=r2))
        printf("La circunferencia2 esta dentro de la circunferencia1\n"); 
    else if((d+r2<=r1)&&(d<r1+r2)&&(r1!=r2))
         printf("La circunferencia1 esta dentro de la circunferencia2\n"); 
    if((d<r1+r2)&&(l1<r2)&&(d+r1>r2))
         printf("Se cortan en 2 puntos\n");
    if((d<r1+r2)&&(l2<r1)&&(d+r2>r1))
         printf("Se cortan en 2 puntos\n");
    if(d>r1+r2)
        printf("No se cortan en ningun punto\n");
    if((d<r1+r2)&&(d+r1==r2)&&(r1!=r2))
        printf("Se cortan en 1 punto\n");
    if((d<r1+r2)&&(d+r2==r1)&&(r1!=r2))
        printf("Se cortan en 1 punto\n");
    return 0;
    }
    
