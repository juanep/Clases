#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

int validarNumero(char* numero, int tam);

int main()
{
    //Person** lista = new_Lista();
    char* name = (char*) malloc(sizeof(char)*31);
    int* control = (int*) malloc(sizeof(int));
    Person* per1 = (Person*) malloc(sizeof(Person));

    ask_Person_Name(per1);
    printf("\n\n %s", per1->name);

    printf("\n\nHello world!\n");
    free(name);
    free(per1);
    free(control);
    return 0;
}

int validarNumero(char* numero, int tam){
    int* contador = (int*) malloc(sizeof(int));
    int validar = 0;
    if(numero != NULL && strlen(numero) < tam){
        for (*contador = 0; *contador < strlen(numero); (*contador)++){
            if(*(numero+(*contador)) < '0' || *(numero+(*contador)) > '9'){
                validar = 1;
            }
            else{
                validar = -1;
                break;
            }
        }
    }
    free(contador);
    return validar;
}
