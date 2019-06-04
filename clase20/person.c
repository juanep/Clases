#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"


Person* new_Person(){
    Person* person = (Person*) malloc(sizeof(Person));
    return person;
}

Person** new_Lista(){
    Person** lista = (Person**) malloc(sizeof(Person*)*size);
    return lista;
}

char* getPerson_Name(Person* person){
    char* auxName = (char*) malloc(sizeof(char)*31);
    if(person != NULL && auxName != NULL){
        strncpy(auxName, person->name, strlen(auxName));
    }
    return auxName;
}

int* ask_Person_Name(Person* person){
    int* retorno = (int*) malloc(sizeof(int));
    char* auxName = (char*) malloc(sizeof(char)*31);
    *retorno = 0;
    if(person != NULL && auxName != NULL){
        printf("Ingrese su nombre: ");
        fflush(stdin);
        if(fscanf(stdin, "%[^\n]", auxName)){
            strncpy(person->name, auxName, strlen(person->name));
            *retorno = 1;
        }
    }
    free(auxName);
    return retorno;
}

int* ask_Person_Age(Person* person){
    int* retorno = (int*) malloc(sizeof(int));
    char* auxName = (char*) malloc(sizeof(char)*31);
    if(person != NULL && auxName != NULL){
        printf("Ingrese su edad: ");
        if(fscanf(stdin, "%[^\n]", auxName)){
            strncpy(person->name, auxName, strlen(person->name));
            *retorno = 1;
        }
    }
    free(auxName);
    return retorno;
}

int* add_Person(Person* person, char* name, int* age){
    int* retorno = (int*) malloc(sizeof(int));
    *retorno = 0;
    if(person != NULL && name != NULL && age != NULL && (*age > 0 && *age < 110)){
        strncpy(person->name, name, strlen(person->name));
        person->age = *age;
        *retorno = 1;
    }
    return retorno;
}
