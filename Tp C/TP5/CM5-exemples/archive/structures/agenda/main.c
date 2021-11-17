#include "agenda.h"

static void afficher_agenda(agenda a) {
    for (int i = 0; i < (*a).taille; i++) {
        personne t = (*a).personnes[i];
        printf("%s\t%s : %d\n",(*t).nom,(*t).prenom,(*t).age);
    }
}

int main() {
    agenda a = creer_agenda_vide();
    ajouter_personne(a, creer_personne("perez", "anthony", 21)); 
    ajouter_personne(a, creer_personne("a", "b", 1));
    ajouter_personne(a, creer_personne("b", "c", 2));
    afficher_agenda(a);
    supprimer_agenda(&a);
    return EXIT_SUCCESS;
}
