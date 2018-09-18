#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#define A 3

typedef struct{
    int legajo;
    char nombre[30];
    int pp;
    int sp;
    float prom;
}esAlumno;


int main()
{
    sAlumno listadoMain[A];

    cargarListadoDeAlumnos(listadoMain, A);
   // miAlumno = pedirAlumno();
   // listadoMain[i].prom = (float) (miAlumno.pp + miAlumno.sp)/2;

    printf("\nlegajo\tnombre\t PP\tSP\tProm\n");
    mostrarListadoDeAlumnos(listadoMain, A);
    return 0;
}
