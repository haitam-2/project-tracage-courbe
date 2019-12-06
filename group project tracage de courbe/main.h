
#ifndef MAIN_H
#define MAIN_H

#define GNUPLOT_PATH "/usr/bin/gnuplot"

#define TAILLE_MAX 1000
#define TMAX 1000
typedef struct coordinates {
    float x;
    float y;
    float z;
} coordinates;

void set_parameter(float *omega, float *rho, float *beta, float *dt);

void intial_coordinates(coordinates *coord);

void lorenz(coordinates *coord, float omega, float rho, float beta, float dt);

#endif