//
//  main.h
//  
//
//  Created by Juan Carlos Garcia on 29/10/20.
//

#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef main_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

typedef struct destruc{
double num1;
double num2;
double num3;
}Estructura;

typedef struct destrucarray{
double num1[3];
double num2[3];
double num3[3];
}Estructuraarray;



#endif /* main_h */
