#include<stdio.h>
int main(){
int i,j,k=4;

while(k>=1){
for(j=1;j<k;j++)
printf("0");

for(j=k;j<=8-k;j++){
if(j==7)
printf("*\n");
else
printf("*");
}
for(j=k+1;j<8;j++){
if(j==7)
printf("0\n");
else
printf("0");
}

k--;
}

k=2;

while(k<=4){
for(j=1;j<k;j++)
printf("0");

for(j=k;j<=8-k;j++)
printf("*");

for(j=k+1;j<8;j++){
if(j==7)
printf("0\n");
else
printf("0");
}
k++;
}
 return 0;
 }


