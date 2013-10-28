#include<stdio.h>
int main()
{
	int m,a; // mes y año
	scanf("%d %d",&m,&a);
	int dias;
	if(m==1) {dias=31;}
	if(m==2) {dias=28;}
	if(m==3) {dias=31;}
	if(m==4) {dias=30;}
	if(m==5) {dias=31;}
	if(m==6) {dias=30;}
	if(m==7) {dias=31;}
	if(m==8) {dias=31;}
	if(m==9) {dias=30;}
	if(m==10) {dias=31;}
	if(m==11) {dias=30;}
	if(m==12) {dias=31;}
	if(m==2 && ( (a%4==0 && !(a%100==0)) || a%400==0))
	dias++;
	printf("%d\n",dias);
}
