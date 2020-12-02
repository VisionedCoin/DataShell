//
//  algoritmo.c
//  
//
//  Created by Juan Carlos Garcia on 26/11/20.
//

#include "algoritmo.h"


void entrenar(param usuarios[],param movies[], double matriz[5][30], int numUsuarios, int numMovies){
    int i,j,x = 0; //i = usuarios, j = movies
    double error, n = 0.1;
    FILE * arch;
    arch = fopen("DatosSalida.csv","w");
        for(i = 0; i < numUsuarios; i++){
            for(j = 0; j < numMovies; j++){
                if(matriz[i][j] != 0){
                    x=0;
                    do{
                        error = matriz[i][j] - ProductPunto(usuarios[i],movies[j]);
                        usuarios[i].accion = usuarios[i].accion + (n*error*movies[j].accion);
                        usuarios[i].comedia = usuarios[i].comedia + (n*error*movies[j].comedia);
                        usuarios[i].romance = usuarios[i].romance + (n*error*movies[j].romance);
                        usuarios[i].terror = usuarios[i].terror + (n*error*movies[j].terror);
                        usuarios[i].ficcion = usuarios[i].ficcion + (n*error*movies[j].ficcion);
                        usuarios[i].drama = usuarios[i].drama + (n*error*movies[j].drama);
                        usuarios[i].historia = usuarios[i].historia + (n*error*movies[j].historia);
                        usuarios[i].documental = usuarios[i].documental + (n*error*movies[j].documental);
                        usuarios[i].arte = usuarios[i].arte + (n*error*movies[j].arte);
                        usuarios[i].animada = usuarios[i].animada + (n*error*movies[j].animada);
                        x++;
                        fprintf(arch, "\n%d, %f", x, error);
                    }while(x < 1000);
                    
                }
            }
        }
    fclose(arch);
    
}

double ProductPunto(param Peli1, param Peli2)
{
    double producto1, producto2, producto3, Final;
    producto1=Peli1.accion*Peli2.accion+Peli1.comedia*Peli2.comedia+Peli1.romance*Peli2.romance;
    producto2=Peli1.terror*Peli2.terror+Peli1.ficcion*Peli2.ficcion+Peli1.drama*Peli2.drama;
    producto3=Peli1.historia*Peli2.historia+Peli1.documental*Peli2.documental+Peli1.arte*Peli2.arte+Peli1.animada*Peli2.animada;
    
    Final=producto1+producto2+producto3;
    return Final;
    
}



