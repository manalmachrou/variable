#include <stdio.h>
#include <stdlib.h>

int main() {
    float rayon, volume;
    const float PI = 3.14159;

    // Demander � l'utilisateur de saisir le rayon de la sph�re
    printf("Entrez le rayon de la sph�re : ");
    scanf("%f", &rayon);

    // Calcul du volume de la sph�re
    volume = (4.0 / 3.0) * PI * pow(rayon, 3);

    // Afficher le volume
    printf("Le volume de la sph�re est : %.2f\n", volume);

    return 0;
}
