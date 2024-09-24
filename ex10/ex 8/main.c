#include <stdio.h>
#include <stdlib.h>

int main()
{


    float nombre1, nombre2, nombre3;
    float moyenne_geometrique;

    // Demander à l'utilisateur de saisir les trois nombres
    printf("Entrez le 1er nombre : ");
    scanf("%f", &nombre1);

    printf("Entrez le 2ème nombre : ");
    scanf("%f", &nombre2);

    printf("Entrez le 3ème nombre : ");
    scanf("%f", &nombre3);

    // Calcul de la moyenne géométrique
    moyenne_geometrique = cbrt(nombre1 * nombre2 * nombre3); // cbrt est la fonction racine cubique

    // Afficher le résultat
    printf("La moyenne géométrique est : %.2f\n", moyenne_geometrique);

    return 0;
}

