#ifndef ELEVES_H
#define ELEVES_H

#define TAILLE_NOM 25
#define TAILLE_PRENOM 25
#define NOMBRE_ELEVE 125


typedef struct Eleves
{
    char prenoms[TAILLE_PRENOM];
    char noms[TAILLE_NOM];
    char genre[2]; 
    int age;
    int annees;
    int mois;
    int jours;
} Eleve;

// création d'un tableau de structure
Eleve ecole[NOMBRE_ELEVE];

#endif