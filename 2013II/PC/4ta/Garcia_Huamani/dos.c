#include <stdlib.h>
#include <stdio.h>

int main(){
int kk,ll,mm,ii,jj,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,pp=0,qq=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
int aa,a2=0,b2=0,c2=0,d2=0,e2=0,f2=0,g2=0,h2=0,i2=0,j2=0,k2=0,l2=0,m2=0,n2=0,o2=0,p2=0,q2=0,r2=0,s2=0,t2=0,u2=0,v2=0,w2=0,x2=0,y2=0,z2=0;
printf("introdusca el numero de letras q tendran las palabras:\n");
scanf("%d",&mm);
char AA;
char* p=&AA;
printf("introdusca primera palabra:\n");
for(aa=0;aa<mm;aa++)
scanf("%c",p+aa);

char BB;
char* q=&BB;
printf("introdusca segunda palabra:\n");
for(aa=0;aa<mm;aa++)
scanf("%c",q+aa);

for(ii=0;ii<mm;ii++){
for(jj=0;jj<mm;jj++){
if(*(p+i)=='A')
a++;
if(*(p+i)=='B')
b++;
if(*(p+i)=='C')
c++;
if(*(p+i)=='D')
d++;
if(*(p+i)=='E')
e++;
if(*(p+i)=='F')
f++;
if(*(p+i)=='G')
g++;
if(*(p+i)=='H')
h++;
if(*(p+i)=='I')
i++;
if(*(p+i)=='J')
j++;
if(*(p+i)=='K')
k++;
if(*(p+i)=='L')
l++;
if(*(p+i)=='M')
m++;
if(*(p+i)=='N')
n++;
if(*(p+i)=='O')
o++;
if(*(p+i)=='P')
pp++;
if(*(p+i)=='Q')
qq++;
if(*(p+i)=='R')
r++;
if(*(p+i)=='S')
s++;
if(*(p+i)=='T')
t++;
if(*(p+i)=='U')
u++;
if(*(p+i)=='V')
v++;
if(*(p+i)=='W')
w++;
if(*(p+i)=='X')
x++;
if(*(p+i)=='Y')
y++;
if(*(p+i)=='Z')
z++;
}
}
for(kk=0;kk<mm;kk++){
for(ll=0;ll<mm;ll++){
if(*(p+i)=='A')
a2++;
if(*(q+i)=='B')
b2++;
if(*(q+i)=='C')
c2++;
if(*(q+i)=='D')
d2++;
if(*(q+i)=='E')
e2++;
if(*(q+i)=='F')
f2++;
if(*(q+i)=='G')
g2++;
if(*(q+i)=='H')
h2++;
if(*(q+i)=='I')
i2++;
if(*(q+i)=='J')
j2++;
if(*(q+i)=='K')
k2++;
if(*(q+i)=='L')
l2++;
if(*(q+i)=='M')
m2++;
if(*(q+i)=='N')
n2++;
if(*(q+i)=='O')
o2++;
if(*(q+i)=='P')
p2++;
if(*(q+i)=='Q')
q2++;
if(*(q+i)=='R')
r2++;
if(*(q+i)=='S')
s2++;
if(*(q+i)=='T')
t2++;
if(*(q+i)=='U')
u2++;
if(*(q+i)=='V')
v2++;
if(*(q+i)=='W')
w2++;
if(*(q+i)=='X')
x2++;
if(*(q+i)=='Y')
y2++;
if(*(q+i)=='Z')
z2++;
}
}
if( a==a2 && b==b2 && c==c2 && d==d2 && e==e2 && f==f2 && g==g2 && h==h2 && i==i2 && j==j2 && k==k2 && l==l2 && m==m2 && n==n2 && o==o2 && pp==p2 && qq==q2 && r==r2 && s==s2 && t==t2 && u==u2 && v==v2 && w==w2 && x==x2 && y==y2 && z==z2)
printf("las palabras son anagramas\n");
else printf("las palabras no son anagramas\n");
return 0;
}

