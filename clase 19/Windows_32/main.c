#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int* quant = (int*) malloc(sizeof(int));
    int* count = (int*) malloc(sizeof(int));
    FILE * pFile;
    ArrayList* pArrayList = al_newArrayList();
    pFile = fopen("data.csv", "r");
    pArrayList = al_newArrayList();

    *quant = parserEmployee(pFile, pArrayList);
    printf("\n Id \t Nombre \t Apellido \t isEmpty\n\n");
    for(*count = 0; *count < *quant; (*count)++){
        Employee* employee = (Employee*) malloc(sizeof(Employee));
        employee = (Employee*) al_get(pArrayList, *count);
        printf("%3d %14s %14s %3d", employee_getId(employee), employee_getName(employee), employee_getLastName(employee), employee_getIsEmpty(employee));
    }

    free(count);
    free(quant);
    free(pArrayList);
    fclose(pFile);
    return 0;
}
