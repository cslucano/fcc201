#include <stdio.h>

int main()
{
int anio,anio1,anio2,anio3,anio4,anio5;
int num,num1,num2,num3,num4;

scanf("%d",&anio);



if (anio>=1000 && anio<=2000)

{

anio1=anio%1000;

anio2=(anio1/1000)%1000;
anio3=anio2%100;
anio4=anio3%50;
anio5=anio4%10;


printf("%d \n",anio1);
printf("%d \n",anio2);
printf("%d \n",anio3);
printf("%d \n",anio4);
printf("%d \n",anio5);


num1=anio-anio1;
num2=anio1-anio2;
num3=anio2-anio3;
num4=anio3-anio4;

/*printf("%d \n",num1);
printf("%d \n",num2);
printf("%d \n",num3);
printf("%d \n",num4); 
*/









}

else { printf("Por favor ingrese un year entre 1000 y 2000");}


return 0;
}
