#include "majorite.h"
#include <time.h>

/* Macro définissant la taille des tableaux utilisés 
 * Pendant la compilation, le pré-processeur remplace toutes les 
 * occurences de TAILLE par la valeur -textuellement- 11
 */
#define TAILLE 11

int main() {

    srand(time(NULL));
    int resultat = 0;

    do {
        int *v = tableau_aleatoire(TAILLE, 4);
        afficher_tableau(v,10);
        resultat = element_majoritaire(v,TAILLE);
        printf("\nElement majoritaire : %d\n", resultat);
        free(v);
    } while (resultat == -1);

    return 0;

}
