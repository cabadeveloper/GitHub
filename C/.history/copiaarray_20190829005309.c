#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/
void copia_array(int a[], int b[], int size);
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];

    printf("Copiando Arrays \n \n \n ")

        copia_array(a, b, 5);

    return 0;
}

copia_array(int a[], int b[])
{
}

void copia_array(int a[], int b[], int size)
{
    int i;
    // for(inicializacion; condicion; incremento)
    for (i = 0; i < size; i++)
    {
        //copiando a en b
        b[i] = a[i];
        //Codigo;
    }
    for (i = 0; i < size; i++)
    {
        //copiando a en b
        printf("%i", b[i]);
        //Codigo;
    }
}
/*Fin de la funciòn C */