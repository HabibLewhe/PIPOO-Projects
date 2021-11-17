#include "agenda.h"

agenda creer_agenda_vide() {

    agenda a = malloc( sizeof(struct agenda) );
    (*a).personnes = NULL;
    (*a).taille = 0;
    return a;

}

void ajouter_personne(agenda a, personne p) {

    (*a).personnes = realloc((*a).personnes, ++((*a).taille)*sizeof(struct personne));
    (*a).personnes[(*a).taille-1] = p;

}



void supprimer_agenda(agenda* a) {

    for(int i = 0; i < (**a).taille; i++) 
        free((**a).personnes[i]);

    free((**a).personnes);
    free(*a); 

}
