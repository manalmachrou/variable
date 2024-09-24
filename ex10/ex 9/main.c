#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x1, y1, z1, x2, y2, z2;
    float distance;

    // Demander � l'utilisateur de saisir les coordonn�es du premier point
    printf("Entrez les coordonn�es du 1er point (x1, y1, z1) : ");
    scanf("%f %f %f", &x1, &y1, &z1);

    // Demander � l'utilisateur de saisir les coordonn�es du deuxi�me point
    printf("Entrez les coordonn�es du 2�me point (x2, y2, z2) : ");
    scanf("%f %f %f", &x2, &y2, &z2);

    // Calcul de la distance entre les deux points
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    // Afficher la distance
    printf("La distance entre les deux points est : %.2f\n", distance);

    return 0;
}
