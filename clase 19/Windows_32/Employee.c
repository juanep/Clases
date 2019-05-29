#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    return 0;
}


void employee_print(Employee* this)
{

}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{
    int retorno = 0;
    if(this != NULL){
        this->id = id;
        retorno = 1;
    }
    return retorno;

}

int employee_getId(Employee* this)
{

    return this->id;

}

int employee_setName(Employee* this, char* name)
{
    int retorno = 0;
    if(this != NULL){
        strncpy(this->name, name, sizeof(this->name));
        retorno = 1;
    }
    return retorno;

}

char* employee_getName(Employee* this)
{
    char* auxName = (char*) malloc(sizeof(char)*30);
    strncpy(auxName, this->name, 30);

    return auxName;
}

int employee_setLastName(Employee* this, char* lastName)
{
    int retorno = 0;
    if(this != NULL){
        strncpy(this->lastName, lastName, sizeof(this->lastName));
        retorno = 1;
    }
    return retorno;

}

char* employee_getLastName(Employee* this)
{
    char* auxName = (char*) malloc(sizeof(char)*30);
    strncpy(auxName, this->lastName, 30);

    return auxName;
}

int employee_setIsEmpty(Employee* this, char* isEmpty)
{
    int retorno = 0;
    if(this != NULL && isEmpty != NULL){
        if(strcmp(isEmpty, "true") == 0){
            this->isEmpty = 1;
        }
        else{
            this->isEmpty = 0;
        }
        retorno = 1;
    }
    return retorno;
}

int employee_getIsEmpty(Employee* this)
{

    return this->isEmpty;

}
