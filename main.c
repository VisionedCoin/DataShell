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

int main(void){
    int numPelis, numUsuarios, opcion;
    double matriz[10][30];
    param usuarios[10],pelis[30];
    
    
    numUsuarios = DataShell_leer_arrayofstruct("DatosUsuarios.csv",usuarios);
    numPelis = DataShell_leer_arrayofstruct("DatosPeli.csv",pelis);
    
    DataShell_leer_matriz("CalificacionPelis.csv",matriz, numUsuarios, numPelis);
    
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
    
    Guardar_datos("DatosUsuarios.csv", usuarios, numUsuarios);
    
}
