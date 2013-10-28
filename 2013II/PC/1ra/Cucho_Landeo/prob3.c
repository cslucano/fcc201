#include<stdio.h>
int main(){
    int d,m,a;
     printf("Introduzca el mes:\n");
     scanf("%d",&m);
     printf("Introduzca el año:\n");
     scanf("%d",&a);
     if(a%4==0){
        if(a%100==0){
           switch(m){
             case 1:
               printf("Tiene 31 días\n");
             break;
             case 2:
               printf("Tiene 28 días\n");
             break;
             case 3:
               printf("Tiene 31 días\n");
             break;
             case 4:
               printf("Tiene 30 días\n");
             break;
             case 5:
               printf("Tiene 31 días\n");
             break;
             case 6:
               printf("Tiene 30 días\n");
             case 7:
               printf("Tiene 31 días\n");
             break;
             case 8:
               printf("Tiene 31 días\n");
             break;
             case 9:
               printf("Tiene 30 días\n");
             break;
             case 10:
               printf("Tiene 31 días\n");
             break;
             case 11:
               printf("Tiene 30 días\n");
             break;
             case 12:
               printf("Tiene 31 días\n");
             break;
             default:
               printf("El mes tiene 12 meses... no más\n");
             }             
        }
        else{
             printf("Es año bisiesto y ");
             switch(m){
             case 1:
               printf("Tiene 31 días\n");
             break;
             case 2:
               printf("Tiene 29 días\n");
             break;
             case 3:
               printf("Tiene 31 días\n");
             break;
             case 4:
               printf("Tiene 30 días\n");
             break;
             case 5:
               printf("Tiene 31 días\n");
             break;
             case 6:
               printf("Tiene 30 días\n");
             case 7:
               printf("Tiene 31 días\n");
             break;
             case 8:
               printf("Tiene 31 días\n");
             break;
             case 9:
               printf("Tiene 30 días\n");
             break;
             case 10:
               printf("Tiene 31 días\n");
             break;
             case 11:
               printf("Tiene 30 días\n");
             break;
             case 12:
               printf("Tiene 31 días\n");
             break;
             default:
               printf("El mes tiene 12 meses... no más\n");
             }
       }
   }
       else {
             switch(m){
             case 1:
               printf("Tiene 31 días\n");
             break;
             case 2:
               printf("Tiene 28 días\n");
             break;
             case 3:
               printf("Tiene 31 días\n");
             break;
             case 4:
               printf("Tiene 30 días\n");
             break;
             case 5:
               printf("Tiene 31 días\n");
             break;
             case 6:
               printf("Tiene 30 días\n");
             case 7:
               printf("Tiene 31 días\n");
             break;
             case 8:
               printf("Tiene 31 días\n");
             break;
             case 9:
               printf("Tiene 30 días\n");
             break;
             case 10:
               printf("Tiene 31 días\n");
             break;
             case 11:
               printf("Tiene 30 días\n");
             break;
             case 12:
               printf("Tiene 31 días\n");
             break;
             default:
               printf("El mes tiene 12 meses... no más\n");  
             }
        }
return 0;
} 
