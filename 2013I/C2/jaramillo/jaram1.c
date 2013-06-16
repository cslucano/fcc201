#include<stdio.h>
#include<math.h>
#define p 3.1416
float cosx(int i){
    float n;
    float c;
c=i*p/180;
    n=1-(pow(c,2)/2)+(pow(c,4)/24)-(pow(c,6)/720)+(pow(c,8)/40320)-(pow(c,10)/3628800);
     return n;
}
int main()
{
    int i=1;
    float z;
    for(i=1;i<=90;i++)
{
        z=cosx(i);
        printf("el coseno del angulo es %.7f\n",z);
}
    return 0;
}
