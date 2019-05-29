#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    int retorno = 0;
    int* count = (int*) malloc(sizeof(int));
    int* quant = (int*) malloc(sizeof(int));
    char buffer[4][30];
    if(pFile != NULL && pArrayListEmployee != NULL){
        *quant = 0;
        *count = 0;
        if(pFile != NULL){
            do{
                *count = fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", buffer[1], buffer[2], buffer[3], buffer[4]);
                if(*count == 4){
                    Employee* employee = (Employee*) malloc(sizeof(Employee));
                    if(employee != NULL){
                        employee_setId(employee, atoi(buffer[1]));
                        employee_setName(employee, buffer[2]);
                        employee_setLastName(employee, buffer[3]);
                        employee_setIsEmpty(employee, buffer[4]);
                    }
                    al_add(pArrayListEmployee, employee);
                    (*count)++;
                }
            }while(!feof(pFile));
            if(*count == (al_len(pArrayListEmployee)-1)){
                retorno = 1;
            }
            else{
                printf("\nLectura de archivo incompleta");
            }
        }
    }
    return retorno;
}
