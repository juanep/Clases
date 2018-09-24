#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#define A 3
#define VACIO 0
#define OCUPADO 1

typedef struct{
    int legajo;
    char nombre[30];
    int pp;
    int sp;
    float prom;
    int estado;
}esAlumno;


int main()
{
    sAlumno listadoMain[A];
    int i;
    int opcion;
    int aux;

    for(i=0; i<A; i++){
        listadoMain.estado = VACIO;
    }

    do{
        printf("1.Alta\n2.Modificar\n3.Mostrar\n10.Salir\n Eli");
        scanf("%d", opcion);
        switch(opcion){
            case 1: i = cargarListadoDeAlumnos(listadoMain, A);
                if(i!=-1){
                    puts("carga exitosa.");
                }else{
                    puts("no hay espacio.");
                }
                break;
            case 2: printf("ingrese legajo:"); // armar la funcion para MODIFICAR <-----
                scanf("%d", &aux);             // preguntar si existe el legajo.
                for(i=0; i<A; i++){            // o si el usuario no quiere cargar numero.
                    if(listadoMain[i].estado==OCUPADO && aux==listadoMain[i].legajo){
                        printf("ingrese el nuevo promedio: ");
                        scanf("%.2f", &listadoMain[i].prom);
                        break;
                    }
                }
                break;
            case 3:
        }
    }

   // miAlumno = pedirAlumno();
   // listadoMain[i].prom = (float) (miAlumno.pp + miAlumno.sp)/2;

    printf("\nlegajo\tnombre\t PP\tSP\tProm\n");
    mostrarListadoDeAlumnos(listadoMain, A);
    return 0;
}
