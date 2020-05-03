#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Gestion de menu d'accueil */
// solène mehdi alixia

#include "menu.h"
#include "formulaire.h"
#include "eleves.h"
#define NOMBRE_ELEVE 125
#define CHOIX_QUITTER 0

// Constantes

#define CHOIX_QUITTER 0
#define CHOIX_INSCRIRE_ELEVES 1
#define CHOIX_DETAILS_ELEVES 2
#define CHOIX_RECHERCHE_ELEVES 3
#define CHOIX_DETAILS_CLASSE 4
#define CHOIX_DETAILS_ECOLE 5

// Prototypes

void traiterChoixAccueil(int choix);
int commandeAfficherDetailsEcole(void);

/* Gérer le menu Accueil */

void menuAccueil(void)
{
    int choix = 0;

    // variable du choix utilisateur
    do
    {
        do
        {
            introMenu("Accueil");
            printf(
                "ELEVES\n"
                "[1] Inscrire un élève\n"
                "[2] Détails d'un élève\n"

                "[3] Rechercher un élève\n\n"

                "CLASSES\n"
                "[4] Détails des classes\n\n"

                "ECOLE\n"
                "[5] Détails de l'école\n"

                "[0] Quitter\n\n"

                "Votre choix : ");
            scanf("%d", &choix);

        } while (choix < 0 || choix > 6);

        traiterChoixAccueil(choix);

    } while (choix != CHOIX_QUITTER);
}

void traiterChoixAccueil(int choix)
{

    // traiter choix

    switch (choix)
    {

    case CHOIX_INSCRIRE_ELEVES:
        formulaireInscriptionEleves();
        break;

    case CHOIX_DETAILS_ELEVES:
        commandeAfficherDetailsEleves();
        break;

    case CHOIX_RECHERCHE_ELEVES:
        break;

    case CHOIX_DETAILS_CLASSE:
     commandeAfficherDetailsClasses();
        break;

    case CHOIX_DETAILS_ECOLE:
        commandeAfficherDetailsEcole();
        break;
    }
}

