#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
 float kilometres, metres , m_s;
printf ("donne la vitesse en kilometres par heure (km/h):");
scanf("%f",&kilometres);
//(km/h)=k_h
m_s = kilometres*0.27778;
printf("votre vitesse  (m/s): %f",m_s);
