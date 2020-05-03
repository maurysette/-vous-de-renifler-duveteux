// nettoie l'écran ( medhi, solène,alixia)
#include <stdio.h>
#include <stdlib.h>

void effaceEcran(void)
{
    system("@cls||clear");
}

// Affiche l'en-tête du menu ( medhi, solène,alixia)

void introMenu(char *titre)
{
    effaceEcran();
    printf("Ecole STDIO           "
           "Gestion des élèves        "
           "%s\n\n",
           titre);
}
