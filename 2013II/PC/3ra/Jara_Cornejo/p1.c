#include<stdio.h>
int main(){
int num[1][1000000];
int i,j;
for(i=0;i<1;i++)
for(j=0;j<1000000;j++){
printf("elemento(%d,%d):",i,j);scanf("%d",&num[i][j]);
}
if (i=0,i<1,j=0,j<1000000){
num[i][j]=num[i][j];
printf("numero que se repite:%d\n",num[i][j]);
}
return 0;
}
