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
int main(void){
    int numPelis, numUsuarios, opcion, x, numUs;
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
        system(clear);
        printf(MENU:\n\t1. Recomendacion de peliculas\n\t2. Peliculas populares\n\t3. Peliculas similares\n\t4. Recomendar amigos\n\t9. Salir\n\n);
        scanf("%d",&opcion);
        switch(opcion):
        {
            case 1:
            
            break;
            case 2:
            break;
            case 3:
            break;
            case4:
            break;
            case 9:
            break; 
            default:
            break;
        }
            
        
        
    }while(opcion!=9)
    
for(i=0;i<numUsuarios;i++)
{
R=Recomendar_pelicula(usuarios[i], pelis, matriz, numPelis, i);
printf("A %s le recomendamos %s", usuarios[i].nombre, pelis[R].nombre);
} 
   Guardar_datos("DatosUsuarios.csv", usuarios, numUsuarios);
    
}

int Recomendar_pelicula(param usu, param movies[], double matriz[5][30], int numpelis, int nuusu)
{
	int i, es;
	double re=-100,Pp; 
	for(i=0;i<numpelis;i++)
{
if(matriz[nuusu][i]==0)
{
Pp=ProductPunto(usu, movies[i]);
if(Pp>re)
re=Pp;
es=i;
}
}
return es;
}
