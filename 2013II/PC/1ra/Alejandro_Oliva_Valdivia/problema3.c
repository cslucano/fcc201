#include<stdio.h>
int main()
{
int d,m,a;
printf("Introduzca fecha en mes y anoen numeros");
scanf("%d %d %d",&d,&m,&a);
if(a==%4){
switch(d){
     case 1:if(m==1)printf("d es igual a 31 dias\n");break;
     case 2:if(m==2)prinft("d es igual a 28 dias\n");break;
     case 3:if(m==3)prinft("d es igual a 31 dias\n");break;
     case 4:if(m==4)prinft("d es igual a 30 dias\n");break;
     case 5:if(m==5)prinft("d es igual a 31 dias\n");break;
     case 6:if(m==6)prinft("d es igual a 30 dias\n");break;
     case 7:if(m==7)prinft("d es igual a 31 dias\n");break; 
     case 8:if(m==8)prinft("d es igual a 31 dias\n");break; 
     case 9:if(m==9)prinft("d es igual a 30 dias\n");break;
     case 10:if(m==10)prinft("d es igual a 31 dias\n");break;
     case 11:if(m==11)prinft("d es igual a 30 dias\n");break;
     case 12:if(m==12)prinft("d es igual a 31 dias\n");break;
     }
}
if(a!==&4){
switch(d){
     case 1:if(m==1)printf("d es igual a 31 dias\n");break;
     case 2:if(m==2)prinft("d es igual a 29 dias\n");break;
     case 3:if(m==3)prinft("d es igual a 31 dias\n");break;
     case 4:if(m==4)prinft("d es igual a 30 dias\n");break;
     case 5:if(m==5)prinft("d es igual a 31 dias\n");break;
     case 6:if(m==6)prinft("d es igual a 30 dias\n");break;
     case 7:if(m==7)prinft("d es igual a 31 dias\n");break; 
     case 8:if(m==8)prinft("d es igual a 31 dias\n");break; 
     case 9:if(m==9)prinft("d es igual a 30 dias\n");break;
     case 10:if(m==10)prinft("d es igual a 31 dias\n");break;
     case 11:if(m==11)prinft("d es igual a 30 dias\n");break;
     case 12:if(m==12)prinft("d es igual a 31 dias\n");break;

     }
return 0;
}

