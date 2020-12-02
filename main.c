//
//  main.c
//  
//
//  Created by Juan Carlos Garcia on 29/10/20.
//

#include "main.h"
#include "algoritmo.h"
#include "DataShell.h"
#include "Guardar.h"
int Recomendar_pelicula(param Usu, param movies[], double matriz[10][30], int numPelis, int nuusu);
int Recomendar_amigo(param usuarios[], int numUsuarios, int numUs);
void Pelis_Rank(param movies[],double matriz[10][30], int nummovies, int numusuario, int array[]);
int main(void){
    int numPelis, numUsuarios, opcion, op, x, R,numUs, arraype[3];
    double matriz[10][30];
    param usuarios[10],pelis[30];
    numUsuarios = DataShell_leer_arrayofstruct("DatosUsuarios.csv",usuarios);
    numPelis = DataShell_leer_arrayofstruct("DatosPeli.csv",pelis);
    
    DataShell_leer_matriz("CalificacionPelis.csv",matriz, numUsuarios, numPelis);
    
    for(x = 0; x < numUsuarios; x++){
        printf("usuario %d: %s\n",x,usuarios[x].nombre );
    }
    
    printf("Cuál usuario es usted: ");
    scanf("%d",&numUs);
    getchar();

    entrenar(usuarios, pelis, matriz, numUsuarios, numPelis );
    //Menu:
    do{

        system("clear");
        printf("MENU:\n\t1. Recomendacion de peliculas\n\t2. Peliculas populares\n\t3. Peliculas similares\n\t4. Recomendar amigos\n\t9. Salir\n\n");
        scanf("%d",&opcion);
	      getchar();
      
        switch(opcion)
        {
            case 1:
	R=Recomendar_pelicula(usuarios[numUs], pelis, matriz, numPelis, numUs);
	printf("A %s le recomendamos %s\n", usuarios[numUs].nombre, pelis[R].nombre);
	//printf("¿Quieres verla? 1. Si 2. No: ");
	getchar();
            break;
            case 2:
	Pelis_Rank(pelis,matriz, numPelis, numUsuarios, arraype);
printf("Las mejores peliculas son:\n%s\n%s\n%s\n", pelis[arraype[0]].nombre,pelis[arraype[1]].nombre,pelis[arraype[2]].nombre);
getchar();
            break;
            case 3:

            break;
            case 4:
	R=Recomendar_amigo(usuarios, numUsuarios, numUs);
	printf("%s puede ser tu amigo :)", usuarios[R].nombre);
	getchar();
            break;
            case 9:
	printf("Adios\n");
            break;
            default:
            break;
        }
            
        
        
    }while(opcion!=9);

   Guardar_datos("DatosUsuarios.csv", usuarios, numUsuarios);
}

int Recomendar_pelicula(param usu, param movies[], double matriz[10][30], int numpelis, int nuusu)
{
	int i, es;
	double re=-100,Pp;
	for(i=0;i<numpelis;i++)
{
if(matriz[nuusu][i]==0)
{
Pp=ProductPunto(usu, movies[i]);
if(Pp>re)
{
re=Pp;
es=i;
}
}
}
return es;
}

int Recomendar_amigo(param usuarios[], int numUsuarios, int numUs)
{
	int i, es;
	double re=-1000, Pp;
	for(i=0;i<numUsuarios;i++)
	{
	if(i!=numUs)
		{
		Pp=ProductPunto(usuarios[numUs], usuarios[i]);
			if(Pp>re)
				{
				re=Pp;
				es=i;
				}
		}

}
return es;
}

void Pelis_Rank(param movies[],double matriz[10][30], int nummovies, int numusuario, int array[])
{
int i, j, cant=0;
double sum=0, prom[30];
for(i=0;i<nummovies;i++)
{
	for(j=0;j<numusuario;j++)
	{
		if(matriz[j][i]!=0)
		{
		sum=sum+matriz[j][i];
		cant++;
		}
	}
prom[i]=sum/numusuario;
sum=0;
cant=0;
}
array[0]=20;
array[1]=21;
array[2]=22;
for(i=0;i<nummovies;i++)
{
printf("Promedio de %s es: %f",movies[i].nombre, prom[i]);
if(prom[i]>prom[array[0]])
{
array[2]=array[1];
array[1]=array[0];
array[0]=i;
}
else if(prom[i]>prom[array[1]])
{
array[2]=array[1];
array[1]=i;
}
else if(prom[i]>prom[array[2]])
array[2]=i;
}

}
