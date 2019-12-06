#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 1000 
#define TMAX 100

typedef struct fonc {
    float coordinates[3];
    float vitesse[3];
} fonc;

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

void intial_coordinates(float *x, float *y, float *z){
    printf ("Veillez choisir x \n");
    scanf("%f", x);

    printf ("Veillez choisir y \n");
    scanf("%f", y);

    printf ("Veillez choisir z \n");
    scanf("%f", z);
}

void lorenz(fonc *fonction, float omega, float rho, float beta, float dt , float xi, float yi, float zi){
    FILE *fichier = NULL;
    float t=0;
    fichier= fopen("Lorenz.dat", "w");
    char chaine[TAILLE_MAX] = "";
    float x = xi;
    float y = yi;
    float z = zi;
    if(fichier!=NULL){
        fgets(chaine, TAILLE_MAX,fichier);
        fputs("temps\t x\t y\t z\t \n", fichier);
        do{
            fprintf(fichier,"%f\t %f\t %f\t %f\t \n", t, x, y, z);
            x= x * (omega * (y-x));
            y= y * ((x * (rho-x))-y);
            z= z* ((x*y) - (beta * z));
            t=t+dt;
        }while(t<TMAX);
        float x = fonction->coordinates[0];
        float y = fonction->coordinates[1];
        float z = fonction->coordinates[2];
        fonction->vitesse[0]= omega * (y-x);
        fonction->vitesse[1]= (x * (rho-x))-y;
        fonction->vitesse[2]= (x*y) - (beta * z);
    }
    fclose(fichier);
}

int main (){
    float omega, rho, beta, dt;
    float x,y,z;
    fonc fonction;

    set_parameter(&omega,&rho,&beta,&dt);
    intial_coordinates(&x, &y, &z);
    lorenz(&fonction,omega,rho,beta,dt,x,y,z);
    return 0;
}