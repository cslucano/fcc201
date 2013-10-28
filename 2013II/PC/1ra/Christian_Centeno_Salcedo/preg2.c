#include <stdio.h>

int main()
{

int entero,entero2,entero3,entero4,entero5,entero6;
scanf("%d",&entero);


printf("El entero es %d \n",entero);

entero2=entero%1000;

entero3=entero2%100;

entero4=100-entero3;

if(entero4<50)
	{//printf("es mayor que 50 , entonces redondea al mayor");
entero5=entero-entero3;
entero6=entero5+100;

printf("RESULTADO >>>%d \n",entero6);

}

else	{ 
	//printf("Es menor que 50, entonces redondea al menor");
	
entero5=entero-entero3;
printf("RESULTADO >>>%d \n",entero5);

	}




//printf("ENT 2 ES >>>%d \n",entero2);


//printf("ENT 3 ES >>>%d \n",entero3);




return 0;
}
