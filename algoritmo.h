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
 *
 *@returns
 *
 */
EXTERN void entrenar(param usuarios[],param movies[], double matriz[5][30], int numUsuarios, int numMovies);
EXTERN double ProductPunto(param Peli11, param Peli2);





#endif /* algoritmo_h */


