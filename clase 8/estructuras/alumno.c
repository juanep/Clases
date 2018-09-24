#include "alumno.h"
#include <string.h>
#include <stdio.h>

void mostrarUnAlumno(sAlumno miAlumno){
    printf("%d\t%s\t  %d\t%d\t%.2f\n", miAlumno.legajo, miAlumno.nombre, miAlumno.pp, miAlumno.sp, miAlumno.prom);
}

sAlumno pedirAlumno(){
    sAlumno alumnito;
    printf("ingrese legajo: ");
    scanf("%d", &alumnito.legajo);
    printf("ingrese nombre: ");
    fflush(stdin);
    gets(alumnito.nombre);
    printf("ingrese nota primer parcial: ");
    scanf("%d", &alumnito.pp);
    printf("ingrese nota segundo parcial: ");
    scanf("%d", &alumnito.sp);
    return alumnito;
}

int cargarListadoDeAlumnos(sAlumno listado[], int tam){
    int index;
    index = buscarLibre(listado, tam);
    if(index!=-1){
        listado[index] = pedirAlumno();
        listado[index].estado = OCUPADO;
    }
    return index;
}

int buscarLibre(sAlumno lista[], int tam){
    int flag = -1;
    for(int i=0; i<tam; i++){
        if(lista[i].estado==VACIO){
            flag = i;
            break;
        }
    }
    return flag;
}

void mostrarListadoDeAlumnos(sAlumno listado[], int tam){
    for(int i=0; i<tam; i++){
        if(listado[i].estado==OCUPADO){
            mostrarUnAlumno(listado[i]);
        }
    }
}

void ordenarListadoDeAlumnosNombre(sAlumno listado[], int tam){
    int i, j;
    sAlumno aux;
    for(i=0; i<tam-1; i++){
        for(j=i+1; j<tam; j++){
            if(strcmp(listado[i].nombre,listado[j].nombre)>0){
                aux = listado[i];
                listado[i] = listado[j];
                listado[j] = aux;
            }
        }
    }
}

void ordenarListadoDeAlumnosPromedio(sAlumno listado[], int tam){
    int i, j;
    sAlumno aux;
    for(i=0; i<tam-1; i++){
        for(j=i+1; j<tam; j++){
            if(strcmp(listado[i].prom,listado[j].prom)>0){
                aux = listado[i];
                listado[i] = listado[j];
                listado[j] = aux;
            }
        }
    }
}
