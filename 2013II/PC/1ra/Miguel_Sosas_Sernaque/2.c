#include <stdio.h>
#include <stdlib.h>
int main()
{
   int mes, a_o, a,bisiesto ;
   printf("ingrese el año: ");
   scanf("%d",&a_o);
   printf("ingrese el mes: ");
   scanf("%d",&mes);
   switch (mes)
   {
    case 1:
	a=31;
     	printf("El mes tiene %d dias\n",a);
	break ;  
    case 2:
     {
      bisiesto=0;{
      if (a_o%4 == 0)
       if (a_o%400 == 0)
      bisiesto=1;
       else if (a_o%100 == 0)
      bisiesto=0;
       else
      bisiesto=1;}
      if(bisiesto=1)
	a=29;
      else
        a=28;
     	printf("El mes tiene %d dias\n",a);
     }
	break ;
    case 3:
	a=31;
     	printf("El mes tiene %d dias\n",a);
	break ;
    case 4:
	a=30;
     	printf("El mes tiene %d dias\n",a);
	break ;
    case 5:
	a=30;
     	printf("El mes tiene %d dias\n",a);
	break ;
    case 6:
	a=30;
     	printf("El mes tiene %d dias\n",a);
	break ;
    case 7:
	a=31;
     	printf("El mes tiene %d dias\n",a);
	break ;
    case 8:
	a=31;
     	printf("El mes tiene %d dias\n",a);
	break ;
    case 9:
	a=30;
     	printf("El mes tiene %d dias\n",a);
	break ;
    case 10:
	a=31;
     	printf("El mes tiene %d dias\n",a);
	break ;
    case 11:
	a=30;
     	printf("El mes tiene %d dias\n",a);
	break ;
    case 12:
	a=31;
     	printf("El mes tiene %d dias\n",a);
	break ;
    default :
      printf("mes insertado incorrecto\n");
    }
return 0;
}



      
