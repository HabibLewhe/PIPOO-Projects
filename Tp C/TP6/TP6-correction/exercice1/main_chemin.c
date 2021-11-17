#include "chemin.h"
#include <time.h>

static void afficher_chemin(const chemin chm) {
    for(size_t i = 0; i < nombre_sommets(chm); ++i) {
        point p = acces(chm,i);
        affichage(&p);
    }
}

int main() {
    srand(time(NULL));
    chemin chm = chemin_aleatoire(10,50);
    afficher_chemin(chm);
    printf("%f\n",perimetre(chm));

    detruire_chemin(&chm);

    return EXIT_SUCCESS;
}
