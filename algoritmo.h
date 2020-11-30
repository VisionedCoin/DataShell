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
EXTERN void entrenar();
EXTERN double ProductPunto(demovie *Peli11, demovie *Peli2);





#endif /* algoritmo_h */


