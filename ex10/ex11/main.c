#include <stdio.h>
#include <stdlib.h>

int main() {
    float longueur, largeur, surface;

    // Demander à l'utilisateur de saisir la longueur et la largeur
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    // Calcul de la surface du rectangle
    surface = longueur * largeur;

    // Afficher la surface
    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}


