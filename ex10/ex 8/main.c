#include <stdio.h>
#include <stdlib.h>

int main()
{


    float nombre1, nombre2, nombre3;
    float moyenne_geometrique;

    // Demander � l'utilisateur de saisir les trois nombres
    printf("Entrez le 1er nombre : ");
    scanf("%f", &nombre1);

    printf("Entrez le 2�me nombre : ");
    scanf("%f", &nombre2);

    printf("Entrez le 3�me nombre : ");
    scanf("%f", &nombre3);

    // Calcul de la moyenne g�om�trique
    moyenne_geometrique = cbrt(nombre1 * nombre2 * nombre3); // cbrt est la fonction racine cubique

    // Afficher le r�sultat
    printf("La moyenne g�om�trique est : %.2f\n", moyenne_geometrique);

    return 0;
}

