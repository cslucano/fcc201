#include<stdio.h>
#include<math.h>
//# define n 10

int main(){
printf("%d",sumatoria(4));
return ;
}


int sumatoria(int n){
int k,suma;
suma=0;
for (k=1;k<=n;k++){
suma=suma+k;
}
printf("%d\n",suma);
}




