#include<stdio.h>

int main(){
int a,b,c,d,h;
char p;
printf("introducir hora:\n");
scanf("%d %d %c %d %d",&a,&b,&p,&c,&d);

if(a==1 && b>2)
   {
     h=b-2;
     printf("%d:%d%dpm\n",h,c,d);
   }
if(a==2 && (b==0 || b==1))
   {
    if(b==0)
      printf("8:%d%dpm",c,d);
    if(b==1)
      printf("9:%d%dpm",c,d);
   }
if(a==2 && b>=2)
   {
    if(b==2)
      printf("10:%d%dpm",c,d);
    if(b==3)
      printf("11:%d%dpm",c,d);
    if(b==4)
      printf("12:00pm");
   }


if(a<=1)
   {
     printf("%d%d:%d%dam\n",a,b,c,d);
   }




return 0;
}
















