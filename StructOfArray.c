//
//  StructOfArray.c
//  
//
//  Created by Juan Carlos Garcia on 29/10/20.
//

#include "StructOfArray.h"
#include "main.h"

void files_leer_structofarray(char nombre[], Estructuraarray *Estruct)
{
    FILE *archivo=NULL;
    int i=0;
    char linea[1024];
    char *saveptr=NULL, *token=NULL;
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
    Estruct->num1[i]=strtod(token, NULL);
    token = strtok_r(saveptr, ",", &saveptr);
    Estruct->num2[i]=strtod(token, NULL);
    token = strtok_r(saveptr, ",", &saveptr);
    Estruct->num3[i]=strtod(token, NULL);
    i++;
    saveptr=NULL;
    }
fclose(archivo);
}

}

