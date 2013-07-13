#include<stdio.h>
#include<math.h>
int cakenumber(int pos){
int a;
a=(pow(pos-1,3)+5*(pos-1)+6)/6;
return a;
}
main(){
int num,pos,i;
scanf("%d",&pos);
for(i=1;i<pos;i++)
	printf("%d,",cakenumber(i));
printf("%d.\n",cakenumber(i));
}
