  
//
//  DataShell.h
//
//
//

#ifndef DataShell_h
#define DataShell_h


/*
 * System headers required by the following declarations
 * (the implementation will import its specific dependencies):
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Application specific headers required by the following declarations
 * (the implementation will import its specific dependencies):
 */

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef DataShell_IMPORT
#define EXTERN
#else
#define EXTERN extern
#endif

/* Types declarations. */
//Estructura de nuestras peliculas. 
typedef struct demovie{
char nombre[30];
double accion;
double comedia;
double romance;
double terror;
double ficcion;
double drama;
double historia;
double documental;
double arte;
double animada;
char clasf[5];
}param;

/* Global variables declarations. */


/* Function prototypes. */


/*
 *
 * La funcion DataShell_leer_arrayofstruct lee los datos de un file para guardarlos en un arreglo de estructuras (estatico)
 *
 * @params
 *      nombre (char []):
 *  nombre del archivo a leer
 *    	array (param []):
 *  arreglo de datos
 * @returns
 *  int (cantidad de datos leido)
*/

EXTERN int DataShell_leer_arrayofstruct(char nombre[], param array[]);

/*
 *
 * La funcion DataShell_leer_matriz lee la matriz de calificaiones de las peliculas
 *
 * @params
 *
 *    nombre (char [])
 *  nombre del archivo.
 *    matriz (double *[])
 *  matriz de enteros de calificacion
 *    fil (int)
 *  Numero de filas de nuestra matriz
 *    col (int)
 *  Numero de columnas de nuestra matriz
 * @returns
 *  void.
*/

EXTERN void DataShell_leer_matriz(char nombre[], double matriz[5][30], int fil, int col);

#undef DataShell_IMPORT
#undef EXTERN
#endif /* files_h */
