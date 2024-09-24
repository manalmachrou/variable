#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Affiche "Hello world!" au démarrage
    printf("Hello world!\n");

    // Déclaration des variables
    float kilometres, m_s;

    // Demande à l'utilisateur d'entrer la vitesse en km/h
    printf("Donne la vitesse en kilomètres par heure (km/h) : ");
    scanf("%f", &kilometres);

    // Conversion de la vitesse de km/h en m/s (1 km/h = 0.27778 m/s)
    m_s = kilometres * 0.27778;


    }

    // Affiche la vitesse convertie en mètres par seconde (m/s
