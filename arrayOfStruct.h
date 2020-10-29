//
//  arrayOfStruct.h
//  
//
//  Created by Juan Carlos Garcia on 29/10/20.
//

#ifndef arrayOfStruct_h
#define arrayOfStruct_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#ifndef arrayOfStruct_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif



EXTERN void files_leer_arrayofstruct(char [], Estructura[]);

#endif /* arrayOfStruct_h */
