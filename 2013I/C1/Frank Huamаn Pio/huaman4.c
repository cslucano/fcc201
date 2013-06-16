#include<stdio.h>
int main(){
    float comp,desc,pt;
    printf("Monto de la compra=");
    scanf("%f",&comp);
    if(comp<800){
        pt=comp;
        }
    if((comp>=800)&&(comp<=1500)){
        desc=0.1*comp;
        pt=comp-desc;
        }
    if((comp>1500)&&(comp<=5000)){
        desc=0.15*comp;
        pt=comp-desc;
        }
    if(comp>5000){
        desc=0.2*comp;
        pt=comp-desc;
        }
    printf("El precio real a pagar es=%f \n",pt);
    return 0;
    }
