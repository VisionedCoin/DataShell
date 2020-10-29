#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct destruc{
double num1;
double num2;
double num3;
}Estructura;

void files_leer_arrayofstruct(char [], Estructura[]);
int main()
{
char nombre[30];
Estructura array[10];
int i;
files_leer_arrayofstruct(nombre, array);
for(i=0;i<3;i++)
printf("%f, %f, %f \n", array[i].num1, array[i].num2, array[i].num3);

}

void files_leer_arrayofstruct(char nombre[], Estructura array[])
{
	FILE *archivo=NULL;
	int i=0;
	char linea[1024];
	char *saveptr, *token=NULL;
archivo=fopen("prueba.csv", "rt");
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
	token = strtok_r(linea, ",", &saveptr);
	array[i].num2=strtod(token, NULL);
	token = strtok_r(linea, ",", &saveptr);
	array[i].num3=strtod(token, NULL);
	i++;
	}

fclose(archivo);
}
}
