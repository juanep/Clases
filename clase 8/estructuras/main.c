#include <stdio.h>
#include <stdlib.h>
#define A 3

typedef struct{
    int legajo;
    char nombre[30];
    int pp;
    int sp;
    float prom;
}sAlumno;

void mostrarUnAlumno(sAlumno);
sAlumno pedirAlumno();

int main()
{
    sAlumno listadoMain[A];

    for(int i=0; i<A; i++){
        printf("ingrese legajo: ");
        scanf("%d", &listadoMain[i].legajo);
        printf("ingrese nombre: ");
        fflush(stdin);
        gets(listadoMain[i].nombre);
        printf("ingrese nota primer parcial: ");
        scanf("%d", &listadoMain[i].pp);
        printf("ingrese nota segundo parcial: ");
        scanf("%d", &listadoMain[i].sp);
        listadoMain[i].prom = (float) (listadoMain[i].pp + listadoMain[i].sp)/2;
    }
   // miAlumno = pedirAlumno();
   // listadoMain[i].prom = (float) (miAlumno.pp + miAlumno.sp)/2;

    printf("\nlegajo\tnombre\t PP\tSP\tProm\n");
    for(int i=0; i<A; i++){
        mostrarUnAlumno(listadoMain[i]);
    }
    return 0;
}

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
