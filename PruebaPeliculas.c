#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct demovie{
char nombre[30];
int accion;
int comedia;
int romance;
int terror;
int ficcion;
int drama;
bool historia;
bool documental;
bool arte;
bool animada;
char clasf[5];
}param;

int files_leer_arrayofstruct(char nombre[], param array[]);
int main()
{
int cant,i;
char nombre[30];
param movies[10];
printf("Ingrese csv: ");
scanf("%s", nombre);
cant=files_leer_arrayofstruct(nombre,movies);

for (i=0;i<cant;i++)
{
printf("Nombre: %s\n", movies[i].nombre);
printf("Accion: %d\n", movies[i].accion);
printf("Comedia: %d\n", movies[i].comedia);
if(movies[i].animada)
printf("Es animada\n");
else
printf("No es animada\n");
printf("Clasificaccion: %s\n", movies[i].clasf);
printf("\n\n");
}
return 0;
}


int files_leer_arrayofstruct(char nombre[], param array[])
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
