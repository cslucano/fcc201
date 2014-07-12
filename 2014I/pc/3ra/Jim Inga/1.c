#include<stdio.h>
#define t 10

int main(){
double m[t];
int i,j;
for(i=0;i<t;i++){
	m[i]=rand()%100;
printf("%.2lf\n",m[i]);
}

for(i=0;i<t;i++){
	for(j=i+1;j<t;j++)
		if(m[i]=m[j]) ;
			printf("%.2lf se repite\n",m[i]);
			break;
			
}

return 0;
}
