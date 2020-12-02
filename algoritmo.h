//
//  algoritmo.h
//  
//
//  Created by Juan Carlos Garcia on 26/11/20.
//

#ifndef algoritmo_h
#define algoritmo_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "DataShell.h"

#ifndef algoritmo_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/*
 *  la funcion entrenar se utiliza al inicio para entrenar al algoritmo de recomendaciones
 *
 *@params
 *
 *  usuarios (param []):
 *      arreglo de usuarios
 *  movies (param []):
 *      arreglo de peliculas
 *  matriz (double [][]):
 *      matriz de calificaciones
 *  numUsuarios (int):
 *      numero de usuarios
 *  numMovies (int):
 *      numero de peliculas
 *@returns
 *  void
 *
 */

EXTERN void entrenar(param usuarios[],param movies[], double matriz[5][30], int numUsuarios, int numMovies);

/*
 *  la funcion ProcuctPunto se utiliza para obtener el producto punto de dos peliculas
 *
 *@params
 *
 *  Peli1 (param):
 *      estructura pelicula 1
 *  Peli2 (param):
 *      estructura pelicula 2
 *@returns
 *  double (resultado del producto punto)
 *
 */

EXTERN double ProductPunto(param Peli11, param Peli2);

#endif /* algoritmo_h */


