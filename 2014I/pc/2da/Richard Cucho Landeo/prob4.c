#include<stdio.h>
int euclides(int a, int b){
     int p;
     if(b==0){
     return;
     } 
     p=b;
     b=a%b;
     a=p;
     euclides(a,b);
return euclides(a,b);
}
int main(){
    int x,y;
    printf("Los dos numeros son:\n");
    scanf("%d %d",&x,&y);
    printf("El MCD de los numeros %d y %d es: \n%d\n",x,y,euclides(x,y));
return 0;
}


