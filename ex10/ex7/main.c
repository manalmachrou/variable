#include <stdio.h>
#include <stdlib.h>
int main()

{



    float nombre1, nombre2, nombre3;
    float moyenne_ponderee;

    // Pond�rations
    int poids1 = 2, poids2 = 3, poids3 = 5;

    // Demander � l'utilisateur de saisir les trois nombres
    printf("Entrez le 1er nombre : ");
    scanf("%f", &nombre1);

    printf("Entrez le 2�me nombre : ");
    scanf("%f", &nombre2);

    printf("Entrez le 3�me nombre : ");
    scanf("%f", &nombre3);

    // Calcul de la moyenne pond�r�e
    moyenne_ponderee = (nombre1 * poids1 + nombre2 * poids2 + nombre3 * poids3) / (poids1 + poids2 + poids3);

    // Afficher le r�sultat
    printf("La moyenne pond�r�e est : %.2f\n", moyenne_ponderee);


}

