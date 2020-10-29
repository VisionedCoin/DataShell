//
//  arrayOfStruct.c
//  
//
//  Created by Juan Carlos Garcia on 29/10/20.
//

#include "arrayOfStruct.h"
#include "main.h"

void files_leer_arrayofstruct(char nombre[], Estructura array[])
{
    FILE *archivo=NULL;
    int i=0;
    char linea[1024];
    char *saveptr, *token=NULL;
archivo=fopen(nombre, "rt");
if(archivo!=NULL)
{
    while(!feof(archivo))
    {
    fgets(linea,1024,archivo);
    if(feof(archivo))break;
    if(strlen(linea)>0)
    linea[strlen(linea)-1]='\0';

    token = strtok_r(linea, ",", &saveptr);
    array[i].num1=strtod(token, NULL);
    token = strtok_r(saveptr, ",", &saveptr);
    array[i].num2=strtod(token, NULL);
    token = strtok_r(saveptr, ",", &saveptr);
    array[i].num3=strtod(token, NULL);
    i++;
    saveptr=NULL;
    }

fclose(archivo);
}
}
