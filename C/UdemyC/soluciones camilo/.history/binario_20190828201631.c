#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/
void binario(int n);
int main()
{
    int numero;

    do
    {
        printf("Digite un numero: ");
        scanf("%i", &numero);

    } while (numero < 0);
    return 0;
}
/*Fin de la funciòn C */