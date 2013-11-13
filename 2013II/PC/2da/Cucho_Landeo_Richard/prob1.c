#include<stdio.h>
#include<math.h>
int main(){
    float k,tn,tn1,tn2;
    printf("Dar el valor de 'k':\n");
    scanf("%f",&k);
    for(k=0,tn=0;;k++){
     tn1=(2*pow(-1,k)*pow(3,0.5-k))/((2*k)+1);
     tn=tn1+tn;
     tn2=(2*pow(1,k)*pow(3,0.5-k))/((2*k)+1);
     if(tn2<0.00001)
       break; 
    } 
    printf("El valor de pi=%f\n",tn);
    
return 0;
}
