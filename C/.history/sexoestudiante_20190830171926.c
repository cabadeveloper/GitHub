#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/
/*
Realice un programa que lea un array el sexo de los N estudiantes
del curso de Algoritmos y que determine cuantos hombres y cuantas mujeres 
se encuentran en el grupo, suponiendo que los datos son extraidos alumno por alumno.
*/

int main()
{
    int i, chicos = 0, chicas = 0, numeroestudiantes;
    char estudiantes[50];

    printf("Digite el numero de estudiantes: \n");
    scanf("%i", &numeroestudiantes);

    // for(inicializacion; condicion; incremento)
    for (i = 1; i <= numeroestudiantes; i++)
    {
        scanf("Digite el sexo del estudiante # %i", i);
        fgets(estudiantes, 50, stdin);
        //Codigo;

        if (strcmp(estudiantes, "m") == 0)
        {
            chicos++;
            printf("Agregado Correctamente a Chicos\n");
        }
        else if (strcmp(estudiantes, "f") == 0)
        {
            chicas++ printf("Agregada Correctamente a Chicas\n");
        }
    }
    printf("El total de Chicos es %i \n", chicos);
    printf("El total de Chicas es %i \n", chicas);

    return 0;
}
/*Fin de la funciòn C */