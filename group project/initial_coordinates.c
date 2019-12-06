#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void intial_coordinates(coordinates *coord){
    printf ("Veillez choisir x \n");
    scanf("%f", &(coord->x));

    printf ("Veillez choisir y \n");
    scanf("%f", &(coord->y));

    printf ("Veillez choisir z \n");
    scanf("%f", &(coord->z));
}