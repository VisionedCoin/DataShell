#include <stdio.h>
#include "Guardar.h"

void Guardar_datos(char nombre[], param array[], int cant)
{
 FILE *archivo=NULL;
	int i=0;
        char linea[1024];
archivo=fopen(nombre, "wt");
for(i=0;i<cant; i++)
{
fprintf(archivo, "%s, %f, %f, %f, %f, %f,", array[i].nombre, array[i].accion, array[i].comedia, array[i].romance, array[i].terror, array[i].ficcion);
fprintf(archivo, "%f, %f, %f, %f, %f, %s\n", array[i].drama, array[i].historia, array[i].documental, array[i].arte, array[i].animada, array[i].clasf);
}
fclose(archivo);
}


void Guardar_matriz(char nombre[], double matriz[10][30], int fil, int col)
{
FILE *archivo=NULL;
int i=0, j=0;
archivo=fopen(nombre, "wt");

for(i=0; i<fil; i++)
{
	for(j=0;j<col;j++)
	{
	fprintf(archivo, "%3.4f", matriz[i][j]);
	if(j!=(col-1))
	fprintf(archivo, ",");
	}

fprintf(archivo, "\n");

}

fclose(archivo);
}
