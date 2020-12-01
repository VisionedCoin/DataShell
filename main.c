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
    int numPelis, numUsuarios;
    double matriz[5][30];
    param usuarios[5],pelis[30];
    
    numUsuarios = DataShell_leer_arrayofstruct("DatosUsuarios.csv",usuarios);
    numPelis = DataShell_leer_arrayofstruct("DatosPeli.csv",pelis);
    
    DataShell_leer_matriz("CalificacionPelis.csv",matriz, numUsuarios, numPelis);
    
    entrenar(usuarios, pelis, matriz, numUsuarios, numPelis );
    
    Guardar_datos("DatosUsuarios.csv", usuarios, numUsuarios);
    
}
