#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[3][4];

    int i;
    int j;
    for(i=0; i<3; i++) {
         for(j=0; j<4; j++) {
             x[i][j] = random()%1000;
         }
    }j
    for(i=0; i<3; i++) {
         for(j=0; j<4; j++) {
             printf("%d ", x[i][j]);
         }
         printf("\n");
    }
    
    int y[4] = { 1, 2, 3,4};
    int num_elementos = 4;
    for(i = 0; i < num_elementos; i++) {
        printf("%d ", y[i]);
    }
    printf("\n");

    for(i = 0; i < num_elementos; i++) {
        printf("%d ", *(y + i));
    }
    printf("\n");

    // imprimimos la direccion del puntero y
    printf("direccion de punteros\n");
    for(i = 0; i < num_elementos; i++) {
        printf("%p\n", y + i);
    }
    printf("\n");

    num_elementos = 3 * 4;
    for(i=0; i<3; i++) {
         for(j=0; j<4; j++) {
             printf("%d ", *(*(x + i)+j));
         }
         printf("\n");
    }

    return 0;
}
