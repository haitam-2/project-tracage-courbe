#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void lorenz(coordinates *coord, float omega, float rho, float beta, float dt){
    FILE *fichier = NULL;
    float t=0;
    fichier= fopen("lorenz.dat", "w");
    char chaine[TAILLE_MAX] = "";
    float x = coord->x;
    float y = coord->y;
    float z = coord->z;
    if(fichier!=NULL){
        fgets(chaine, TAILLE_MAX,fichier);
        fputs("  temps\t            x\t             y\t             z\t \n", fichier);
        do{
            fprintf(fichier,"%f\t %f\t %f\t %f\t \n", t, x, y, z);
            x= x + (omega * (y-x))*dt;
            y= y + ((x * (rho-z))-y)*dt;
            z= z + ((x*y) - (beta * z))*dt;
            t=t+dt;
        }while(t<TMAX);
    }
    fclose(fichier);
}