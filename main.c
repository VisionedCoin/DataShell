//
//  main.c
//  
//
//  Created by Juan Carlos Garcia on 29/10/20.
//

#include "main.h"
#include "arrayOfStruct.h"
#include "StructOfArray.h"

int main(){
    char nombre[30];
    Estructuraarray Estarra;
    Estructura array[3];
    int i;
    files_leer_arrayofstruct("prueba.csv", array);
    files_leer_structofarray("prueba.csv", &Estarra);
    for(i=0;i<3;i++)
        printf("%f, ", Estarra.num1[i]);
    printf("\n");
    for (i=0; i<3;i++)
        printf("%f, ", Estarra.num2[i]);
    printf("\n");
    for(i=0;i<3;i++)
        printf("%f, ", Estarra.num3[i]);
    printf("\n\n");
    for(i=0;i<3;i++)
    printf("%f, %f, %f \n", array[i].num1, array[i].num2, array[i].num3);
}
