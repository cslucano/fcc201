#include<stdio.h>
int main(){
    int h,m,k;
    printf("Dar la hora:\n");
    scanf("%d:%d",&h,&m);
    switch(h){
    case 13:
            printf("es 01:%d PM\n",m);
    break;
    case 14:
            printf("es 02:%d PM\n",m);
    break;
    case 15:
            printf("es 03:%d PM\n",m);
    break;
    case 16:
            printf("es 04:%d PM\n",m);
    break;
    case 17:
            printf("es 05:%d PM\n",m);
    break;
    case 18:
            printf("es 06:%d PM\n",m);
    break;
    case 19:
            printf("es 07:%d PM\n",m);
    break;
    case 20:
            printf("es 08:%d PM\n",m);
    break;
    case 21:
            printf("es 09:%d PM\n",m);
    break;
    case 22:
            printf("es 10:%d PM\n",m);
    break;
    case 23:
            printf("es 11:%d PM\n",m);
    break;
    case 0:
            printf("es 12:%d AM\n",m);
    break;
    default:
          if (h>23 || m>59)
            printf("Esta mal\n");  
          else    
            printf("es %d:%d AM\n",h,m);
   }
return 0;
}
