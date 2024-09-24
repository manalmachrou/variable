
#include <stdio.h>

int main() {
    int nombre, unite, dix, cent, mille;

    // Demander à l'utilisateur de saisir un nombre entier à quatre chiffres
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);

    // Extraire chaque chiffre
    mille = nombre / 1000;        // Chiffre des milliers
    cent = (nombre / 100) % 10;   // Chiffre des centaines
    dix = (nombre / 10) % 10;     // Chiffre des dizaines
    unite = nombre % 10;          // Chiffre des unités

    // Afficher le nombre dans l'ordre inverse
    printf("L'inverse de %d est : %d%d%d%d\n", nombre, unite, dix, cent, mille);

    return 0;
}



