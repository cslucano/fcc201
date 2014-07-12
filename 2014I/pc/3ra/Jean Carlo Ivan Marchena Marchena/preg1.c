#include <stdio.h>

#include <stdlib.h>



int main()

{



    int num=1000000;

    int arreglo[1000000];


    int i;

    for (i=0; i<num; i++)

    {

        arreglo[i] = random();

    }





    int j;

    int temporal;

    for (i=0; i<num-1; i++)

    {

        for (j=i+1; j<num; j++)

        {

            if(arreglo[i]>arreglo[j])

            {

                temporal = arreglo[i];

                arreglo[i] = arreglo[j];

                arreglo[j] = temporal;

            }

        }

    }



    return 0;

}

