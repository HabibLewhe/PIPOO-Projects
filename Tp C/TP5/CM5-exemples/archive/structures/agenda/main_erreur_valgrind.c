#include "agenda.h"

/* static : visible uniquement depuis le fichier .o correspondant */
static void afficher_agenda(agenda a) {
    for (int i = 0; i < (*a).taille; i++) {
        personne t = (*a).personnes[i];
        printf("%s\t%s : %d\n",(*t).nom,(*t).prenom,(*t).age);
    }
}

int main() {
    agenda a = creer_agenda_vide();
    ajouter_personne(a, creer_personne("perez", "anthony", 21)); 
    ajouter_personne(a, creer_personne("a", "b", 21)); 
    afficher_agenda(a);
    free(a); // suffisant ?

    return EXIT_SUCCESS;
}
