#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	
	if((year/1000)==1) printf("M");
	else printf("MM");
	year = year%1000;
	if((year/100)==1) printf("C");
	if((year/100)==2) printf("CC");
	if((year/100)==3) printf("CCC");
	if((year/100)==4) printf("CD");
	if((year/100)==5) printf("D");
	if(year/100==6) printf("DC");
	if(year/100==7) printf("DCC");
	if(year/100==8) printf("DCCC");
	if(year/100==9) printf("CM");
	year = year%100;
	if(year/10==1) printf("X");
	if(year/10==2) printf("XX");
	if(year/10==3) printf("XXX");
	if(year/10==4) printf("XL");
	if(year/10==5) printf("L");
	if(year/10==6) printf("LX");
	if(year/10==7) printf("LXX");
	if(year/10==8) printf("LXXX");
	if(year/10==9) printf("XC");
	year = year%10;
	if(year==1) printf("I");
	if(year==2) printf("II");
	if(year==3) printf("III");
	if(year==4) printf("IV");
	if(year==5) printf("V");
	if(year==6) printf("VI");
	if(year==7) printf("VII");
	if(year==8) printf("VIII");
	if(year==9) printf("IX");
	printf("\n");
	return 0;
}
