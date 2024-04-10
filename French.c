#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FrenchLang.h"


ent principal() {
    // Déclaration de variables
    caractère nom[12];

    // Demande à l'utilisateur de saisir deux nombres
    imprimerf("Entrez votre nom: ");
    scanf("%s", nom);

    ent i = 0;
    pour (i = 0; i < longueur(nom); i++) {
        imprimerf("%c\n", nom[i]);
    }
    
    retourner 0;
}