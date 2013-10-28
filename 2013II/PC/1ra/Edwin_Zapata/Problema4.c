#include<stdio.h>
int main(){
int n,a,b,c,d,rest1,rest2,rest3;
printf("Proporciona el numero a convertir:\n");
scanf("%d",&n);
printf("Equivalente:\n");
if(n>=1000&&n<=2000){
	a=n/1000;
	rest1=n%1000;
	b=rest1/100;
	rest2=rest1%100;
	c=rest2/10;
	rest3=rest2%10;
	d=rest3;
	switch (a){
		case 1: printf ("M"); break;
		case 2: printf ("MM"); break;
		default: break;
		}
	switch (b){
		case 1: printf ("C"); break;
		case 2: printf ("CC"); break;
		case 3: printf ("CCC"); break;
		case 4: printf ("CD"); break;
		case 5: printf ("D"); break;
		case 6: printf ("DC"); break;
		case 7: printf ("DCC"); break;
		case 8: printf ("DCCC"); break;
		case 9: printf ("CM"); break;
		default: break;
		}
	switch (c){
		case 1: printf ("X"); break;
		case 2: printf ("XX"); break;
		case 3: printf ("XXX"); break;
		case 4: printf ("XL"); break;
		case 5: printf ("L"); break;
		case 6: printf ("LX"); break;
		case 7: printf ("LXX"); break;
		case 8: printf ("LXXX"); break;
		case 9: printf ("XC"); break;
		default: break;
		}
	switch (d) {
		case 1: printf ("I\n"); break;
		case 2: printf ("II\n"); break;
		case 3: printf ("III\n"); break;
		case 4: printf ("IV\n"); break;
		case 5: printf ("V\n"); break;
		case 6: printf ("VI\n"); break;
		case 7: printf ("VII\n"); break;
		case 8: printf ("VIII\n"); break;
		case 9: printf ("IX\n"); break;
		default: break;
		}
	}
else{printf("Año No Valido\n");}
return 0;
}
