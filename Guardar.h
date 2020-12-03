//
//  Guardar.h
//
//
//

#ifndef Guardar_h
#define Guardar_h


/*
 * System headers required by the following declarations
 * (the implementation will import its specific dependencies):
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DataShell.h"
/*
 * Application specific headers required by the following declarations
 * (the implementation will import its specific dependencies):
 */

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef Guardar_IMPORT
#define EXTERN
#else
#define EXTERN extern
#endif

/* Types declarations. */


/* Global variables declarations. */


/* Function prototypes. */


/*
 *
 * La funcion Guardar_datos sirve para volver a guardar los datos
 * de las peliculas/usuarios con las caracteristicas actualizadas
 * hechas por el algoritmo
 *
 * @params
 *      nombre (char []):
 *  nombre del archivo a leer
 *    	array (param []):
 *  arreglo de datos
 *	cant (int):
 *  Cantidad de datos que hay
 *
 * @returns
 *  void
*/

EXTERN void Guardar_datos(char nombre[], param array[], int cant);
/*
 *
 * La funcion Guardar_matriz funciona para meter los datos
 * actualizados de la calificaciones de las peliculas
 *
 * @params
 *
 *    nombre (char []);
 *  nombre del archivo.
 *    matriz (double *[])
 *  matriz de enteros de calificacion
 *	fil (int):
 *  cantidad de filas(usuarios)
 *	col (int)
 *  cantidad de columnas de la matiz (peliculas)
 *
 * @returns
 *  void.
*/


EXTERN void Guardar_matriz(char nombre[], double matriz[10][30], int fil, int col);

#undef Guardar_IMPORT
#undef EXTERN
#endif /* Guardar_h */
