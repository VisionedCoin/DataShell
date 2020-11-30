//
//  algoritmo.c
//  
//
//  Created by Juan Carlos Garcia on 26/11/20.
//

#include "algoritmo.h"


void entrenar(){
    
    //aqui va el algoritmo para entrenar al sistema de recomendaciones
    
}

double ProductPunto(demovie Peli11, demovie Peli2)
{
    double producto1, producto2, producto3, Final;
    producto1=Peli1.accion*Peli2.accion+Peli1.comedia*Peli2.comedia+Peli1.romance*Peli2.romance;
    producto2=Peli1.terror*Peli2.terror+Peli1.ficcion*Peli2.ficcion+Peli1.drama*Peli2.drama;
    producto3=Peli1.historia*Peli2.historia+Peli1.documental*Peli2.documental+Peli1.arte*Peli2.arte+Peli1.animada*Peli2.animada;
    
    Final=producto1+producto2+producto3;
    return Final;
    
}
