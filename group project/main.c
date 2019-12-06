#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main (){
    float omega, rho, beta, dt;
    coordinates coord;

    set_parameter(&omega,&rho,&beta,&dt);
    intial_coordinates(&coord);
    lorenz(&coord,omega,rho,beta,dt);
    tracer_courbe();

    return 0;
}