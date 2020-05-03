#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "eleves.h"
#include "ecran.h"
#include "formulaire.h"

// alixia

#define CHOIX_QUITTER 0
#define CHOIX_INSCRIPTION 1
#define NOMBRE_ELEVE 125
// pour affecter les classes
#define CP 2014
#define CE1 2013
#define CE2 2012
#define CM1 2011
#define CM2 2010

int i = 0;
int caractere = 0;
FILE *fichiertxt = NULL;
FILE *cptxt = NULL;

int formulaireInscriptionEleves(void)
{
    int choix;
    do
    {
        introMenu("Inscription élève");

        // mehdi
        fichiertxt = fopen("inscription.txt", "a");
        fseek(fichiertxt, 0, SEEK_END);
        printf("nom :\t");
        scanf("%s", ecole[i].noms);
        printf("prenom :\t");
        scanf("%s", ecole[i].prenoms);
        printf("Age :\t");
        scanf("%d", &ecole[i].age);
        printf("Date de naissance jj/mm/aaaa:\t");
        scanf("%d/%d/%d", &ecole[i].jours, &ecole[i].mois, &ecole[i].annees);
        printf("Genre M ou F :");
        scanf("%s", ecole[i].genre);

        // copie
        fprintf(fichiertxt, "Nom: %s Prénom: %s= Age: %d,Date de naissance: %d/%d/%d,Genre: %s\n",
                ecole[i].noms, ecole[i].prenoms, ecole[i].age, ecole[i].jours, ecole[i].mois, ecole[i].annees, ecole[i].genre);

        fclose(fichiertxt);

        // Affecter les élèves saisie à une classe
        // cas 1 l'année de naissance de l'élève eest entre 2015 et 2016 => rentre en cp
        char buffer[512];
        int ligne;
        switch (ecole[i].annees)
        {
        case CP:
            // copier le fichier inscription dans cp
            // ouverture des fichiers
            cptxt = fopen("cp.txt", "a");
            fichiertxt = fopen("inscription.txt", "r");
            // tant que la ligne lu diff de fin on li et on ecrit
            while ((ligne = fread(buffer, 1, 512, fichiertxt)) != 0)
            {
                fwrite(buffer, 1, ligne, cptxt);
            }
            fclose(fichiertxt);
            fclose(cptxt);

            break;

        default:
            break;
        }

        // si l'utilisateur veut ajouter un élève

        printf(
            "\n  [1] Inscrire un autre élève \n"
            "  [0] Revenir à l'accueil\n\n"
            "  Votre choix : ");

        // la boucle recommence quand on tape 1

        scanf("%d", &choix);
    } while (choix != CHOIX_QUITTER);
    return EXIT_SUCCESS;
}

void commandeAfficherDetailsEleves(void)
{
    int choix;
    do
    {   introMenu("Détails élève");

        printf(

            "\n\n[0] Quitter\n\n"
            "Votre choix: ");

        scanf("%d", &choix);

    } while (choix != CHOIX_QUITTER);
}
int commandeAfficherDetailsClasses(void)
{
    int choix;
    do
    {
        introMenu("Détails classe");

        cptxt = fopen("cp.txt", "r");
        if (cptxt == NULL)
        {
            printf("Impossible d'ouvrir le fichier");

            return EXIT_FAILURE;
        }

        do
        {
            caractere = fgetc(cptxt); // On lit le caractère

            printf("%c", caractere); // On l'affiche

        } while (caractere != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(cptxt);
        printf(

            "\n\n[0] Quitter\n\n"
            "Votre choix: ");

        scanf("%d", &choix);

    } while (choix != CHOIX_QUITTER);

    return EXIT_SUCCESS;
}

int commandeAfficherDetailsEcole(void)
{
    int choix = 0;

    do
    {
        introMenu("Détails Ecole");
        puts(
            "                           ===="
            "\n"
            "                           !!!!"
            "\n"
            "      =========================="
            "\n"
            "    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
            "\n"
            "  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
            "\n"
            "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
            "\n"
            "  ||      _____          _____    ||"
            "\n"
            "  ||      | | |          | | |    ||"
            "\n"
            "  ||      |-|-|          |-|-|    ||"
            "\n"
            "  ||      #####          #####    ||"
            "\n"
            "  ||                              ||"
            "\n"
            "  ||      _____   ____   _____    ||"
            "\n"
            "  ||      | | |   @@@@   | | |    ||"
            "\n"
            "  ||      |-|-|   @@@@   |-|-|    ||"
            "\n"
            "  ||      #####   @@*@   #####    ||"
            "\n"
            "  ||              @@@@            ||"
            "\n"
            "******************____****************\n");

        // programme pour afficher les données du tableau de structure
        /*for (i = 0; i < NOMBRE_ELEVE; i++)
        {
            printf("Elève %s %s\n", ecole[i].prenoms, ecole[i].noms);
            printf("%d/%d/%d\n", ecole[i].jours, ecole[i].mois, ecole[i].annees);
            printf("%d\n", ecole[i].age);
            if (ecole[i].genre == 0)
            {
                printf("Genre : M\n\n");
            }
            else
            {
                printf("Genre : F\n");
            }
        }*/

        //programme les fluxs alixia
        fichiertxt = fopen("inscription.txt", "r");

        if (fichiertxt == NULL)
        {
            printf("Impossible d'ouvrir le fichier");

            return EXIT_FAILURE;
        }

        do
        {
            caractere = fgetc(fichiertxt); // On lit le caractère

            printf("%c", caractere); // On l'affiche

        } while (caractere != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichiertxt);

        printf(
            "\n [0] Revenir à l'accueil\n\n"
            "  Votre choix : ");
        scanf("%d", &choix);
    } while (choix != CHOIX_QUITTER);
    return EXIT_SUCCESS;
}
