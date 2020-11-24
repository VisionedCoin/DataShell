#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "DataShell.h"
int DataShell_leer_arrayofstruct(char nombre[], param array[])
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
        strcpy(array[i].nombre, token);
        token = strtok_r(saveptr, ",", &saveptr);
        array[i].accion=strtod(token, NULL);
        token = strtok_r(saveptr, ",", &saveptr);
        array[i].comedia=strtod(token, NULL);
        token = strtok_r(saveptr, ",", &saveptr);
        array[i].romance=strtod(token, NULL);
        token = strtok_r(saveptr, ",", &saveptr);
        array[i].terror=strtod(token, NULL);
        token = strtok_r(saveptr, ",", &saveptr);
        array[i].ficcion=strtod(token, NULL);
	token = strtok_r(saveptr, ",", &saveptr);
        array[i].drama=strtod(token, NULL);
        token = strtok_r(saveptr, ",", &saveptr);
        array[i].historia=strtod(token, NULL);
        token = strtok_r(saveptr, ",", &saveptr);
        array[i].documental=strtod(token, NULL);
        token = strtok_r(saveptr, ",", &saveptr);
        array[i].arte=strtod(token, NULL);
        token = strtok_r(saveptr, ",", &saveptr);
        array[i].animada=strtod(token, NULL);
        token = strtok_r(saveptr, ",", &saveptr);
        strcpy(array[i].clasf, token);
        i++;
        saveptr=NULL;
        }

fclose(archivo);
}
return i;
}


