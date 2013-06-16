#include<stdio.h>
  int main()
    {
      int a,b,c;
     printf("ingrese 3 numeros positivos distintos entre si\n");
     scanf("%d %d %d",&a,&b,&c);
         if(a<b)
            if(b<c)
              printf("el orden es %d %d %d\n",b,a,c);
            else if(a<c)
                 printf("el orden es %d %d %d\n",c,a,b);
               else
                   printf("el orden es %d %d %d\n",a,c,b);
          else
             if(a<c)
               printf("el orden es %d %d %d\n",a,b,c);
             else 
               if(b<c)
                printf("el orden es %d %d %d\n",c,b,a);
               else
                  printf("el orden es %d %d %d\n",b,c,a);
  return 0;
}
 
       






