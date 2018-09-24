
typedef struct{
    int legajo;
    char nombre[30];
    int pp;
    int sp;
    float prom;
    int estado;
}sAlumno;

/** \brief
 * \param
 * \param
 * \return
 */
void mostrarUnAlumno(sAlumno miAlumno);

/** \brief
 * \param
 * \param
 * \return
 */
sAlumno pedirAlumno();

/** \brief
 * \param
 * \param
 * \return int -1: si no hay lugar. >=0 si hay lugar
 */
int cargarListadoDeAlumnos(sAlumno listado[], int tam);

/** \brief
 * \param
 * \param
 * \return
 */
void mostrarListadoDeAlumnos(sAlumno listado[], int tam);

/** \brief
 * \param
 * \param
 * \return
 */
void ordenarListadoDeAlumnos(sAlumno listado[], int tam);

/** \brief
 * \param
 * \param
 * \return
 */
int buscarLibre(sAlumno [], int);
