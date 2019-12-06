#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void set_parameter(float *omega, float *rho, float *beta, float *dt){
    printf ("Veillez choisir le paramétre omega \n");
    scanf("%f", omega);

    printf ("Veillez choisir le paramétre rho \n");
    scanf("%f", rho);

    printf ("Veillez choisir le paramétre beta \n");
    scanf("%f", beta);

    printf ("Veillez choisir le paramétre dt \n");
    scanf("%f", dt);
}