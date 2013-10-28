#include<stdio.h>
int main(){
         int mes,aso;
         puts("1.enero\n2.febrero\n3.marzo\n4.abril\n5.mayo\n6.junio\n7.julio\n8.agosto\n9.setiembre\n10.octubre\n11.noviembre\n12.diciembre\n");

         printf("digite el año y el mes");
         scanf("%d %d",&aso,&mes);
         if(aso%4==0 && aso%100==0){
                              switch(mes){
                                         case 1:
                                         printf("tiene 31 dias");
                                         break;
                                         case 2:
                                         printf("tiene 29 dias");
                                         break;
                                         case 3:
                                         printf("tiene 31 dias");
                                         break;
                                         case 4:
                                         printf("tiene 30 dias");
                                         break;
                                         case 5:
                                         printf("tiene 31 dias");
                                         break;
                                         case 6:
                                         printf("tiene 30 dias");
                                         break;
                                         case 7:
                                         printf("tiene 31 dias");
                                         break;
                                         case 8:
                                         printf("tiene 31 dias");
                                         break;
                                         case 9:
                                         printf("tiene 30 dias");
                                         break;
                                         case 10:
                                         printf("tiene 31 dias");
                                         break;
                                         case 11:
                                         printf("tiene 30 dias");
                                         break;
                                         case 12:
                                         printf("tiene 31 dias");
                                         break;
                                         }
                             }
         else {                       
                             switch(mes){
                                         case 1:
                                         printf("tiene 31 dias");
                                         break;
                                         case 2:
                                         printf("tiene 29 dias");
                                         break;
                                         case 3:
                                         printf("tiene 31 dias");
                                         break;
                                         case 4:
                                         printf("tiene 30 dias");
                                         break;
                                         case 5:
                                         printf("tiene 31 dias");
                                         break;
                                         case 6:
                                         printf("tiene 30 dias");
                                         break;
                                         case 7:
                                         printf("tiene 31 dias");
                                         break;
                                         case 8:
                                         printf("tiene 31 dias");
                                         break;
                                         case 9:
                                         printf("tiene 30 dias");
                                         break;
                                         case 10:
                                         printf("tiene 31 dias");
                                         break;
                                         case 11:
                                         printf("tiene 30 dias");
                                         break;
                                         case 12:
                                         printf("tiene 31 dias");
                                         break;
                                         }
                   }
 return 0;
}



