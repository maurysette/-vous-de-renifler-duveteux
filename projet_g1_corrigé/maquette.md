# Maquette

## Ecran accueil

### Objectif

- Accueillir l'utilisateur(x)
- permettre à l'utilisateur de sortir (x)
- Permettre
  - Inscrire un nouveau élève (x)
  - Assigner un élève à un classe (institeur) (x)
  - Afficher les informations d'un élève (x)
  - Lister les informations de tous les élèves (x)
  - Chercher un élève
  - 

### Visuel

01234567890123456789012345678901234567890123456789012345678901234567890123456789

'''
ECOLE STDIO           Gestion des élèves         Accueil

ELEVE
  [1] Inscrire un élève
  [2] Détails d'un élève

  [3] Affecter un élève

CLASSES
  [4] Détails des classes

ECOLE
  [5] Détails de l'école

  [0] Quitter

  Votre choix : (choix)
'''

## Ecran Inscrire nouvel élève

### Objectifs

- Récolter les caractéristiques de l'élève
- Retour vers l'écran accueil.
- Déclencher la création de l'élève (affectation d'un instituteur)

### Visuel
01234567890123456789012345678901234567890123456789012345678901234567890123456789

'''
ECOLE STDIO         Gestion des élèves          Inscription d'un élève

Prénom : (saisie prénom)
Nom    : (saisie nom)
Age    : (saisie age)
Date de naissance :(saisie date de naissance)
Sexe : (saisie sexe)

Informations fournies:
  Nom    : (nom)
  Prénom : (prénom)
  Age    : (âge)
  Date de naissance : (date de naissance)
  Sexe  : (sexe)

[1] Inscrire l'élève
[2] Modifier l'élève

[0] Revenir à l'accueil
'''

### Comportement
[1] Affiche élève créé avec succès 
puis -> retour à l'accueil

[2] retourne vers le menu Inscrire élève

[3]retour à l'accueil

## Recherche un élève

[1] Rechercher nom et prénom
[2] Supprimer

[0] Revenir à l'accueil
