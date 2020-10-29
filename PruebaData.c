#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void files_leer_arrayofstruct(char [], Estructura[]);
void files_leer_structofarray(char [], Estructuraarray *);
int main()
{
char nombre[30];
Estructuraarray Estarra;
int i;
//files_leer_arrayofstruct("prueba.csv", array);
files_leer_structofarray("prueba.csv", &Estarra);
for(i=0;i<3;i++)
//printf("%f, %f, %f \n", array[i].num1, array[i].num2, array[i].num3);
printf("%f, ", Estarra.num1[i]);
printf("\n");
for (i=0; i<3;i++)
printf("%f, ", Estarra.num2[i]);
printf("\n");
for(i=0;i<3;i++)
printf("%f, ", Estarra.num3[i]);
printf("\n");
}
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
