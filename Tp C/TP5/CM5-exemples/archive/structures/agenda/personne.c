#include "personne.h"

personne creer_personne_vide() {
    personne p = malloc( sizeof(struct personne) );
    /* Rappel : personne est un typedef pour struct personne* */
    return p;
}

personne creer_personne(char* nom, char* prenom, int age) {
    personne p = malloc( sizeof(struct personne) );
    (*p).nom = nom;
    p->prenom = prenom;
    (*p).age = age; 

    return p;
}
