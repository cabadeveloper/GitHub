#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    char tecla;

    printf("Programa de limpiado de pantalla");
    printf("/n--------------------------");
    printf("n/------------------------------");
    printf("Digite 1 para Iniciar");
    scanf("%c", &tecla);

    if (strncmp(tecla == "1"))
    {
        system("clear");
        printf("Pantalla Limpia");
    }
    else
    {
        printf("No funciono, intente de nuevo");
    }

    return 0;
}
/*Fin de la funciòn C */