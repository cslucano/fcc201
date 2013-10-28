#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){ 
    int d,m,a;
    printf("introdusca el numero del mes:");
    scanf("%d",&m);
    printf("introdusca el numero del año:");
    scanf("%d",&a);
if ((a%4==0 && a%100!=0) || a%400==0){
    switch(m){
case 1: d=31; 
printf("la cantidad de dias es:%d \n",d);
break; 
case 3: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 5: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 7: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 8: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 10: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 12: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 2: d=29;
printf("la cantidad de dias es:%d \n",d);
break;
case 4: d=30;
printf("la cantidad de dias es:%d \n",d);
break;
case 6: d=30;
printf("la cantidad de dias es:%d \n",d);
break;
case 9: d=30;
printf("la cantidad de dias es:%d \n",d);
break;
case 11: d=30;
printf("la cantidad de dias es:%d \n",d);
}
    }else
switch(m){
case 1: d=31; 
printf("la cantidad de dias es:%d \n",d);
break; 
case 3: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 5: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 7: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 8: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 10: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 12: d=31; 
printf("la cantidad de dias es:%d \n",d);
break;
case 2: d=28;
printf("la cantidad de dias es:%d \n",d);
break;
case 4: d=30;
printf("la cantidad de dias es:%d \n",d);
break;
case 6: d=30;
printf("la cantidad de dias es:%d \n",d);
break;
case 9: d=30;
printf("la cantidad de dias es:%d \n",d);
break;
case 11: d=30;
printf("la cantidad de dias es:%d \n",d);
}

    
    return 0;
}
    
