#include <stdio.h>
#include <stdlib.h>

int main() {
    float rayon, volume;
    const float PI = 3.14159;

    // Demander à l'utilisateur de saisir le rayon de la sphère
    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &rayon);

    // Calcul du volume de la sphère
    volume = (4.0 / 3.0) * PI * pow(rayon, 3);

    // Afficher le volume
    printf("Le volume de la sphère est : %.2f\n", volume);

    return 0;
}
