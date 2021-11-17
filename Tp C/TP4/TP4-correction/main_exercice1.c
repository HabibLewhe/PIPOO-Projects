#include "exercice1.h"
#include <time.h>

int main() {
    /* Initialiser la graine pour la fonction aléatoire */
    srand(time(NULL));
    int *tableau = tableau_aleatoire(10, 25);
    afficher_tableau(tableau,10);
    /* La mémoire est libérée quand elle n'est plus utile */
    free(tableau);
}
