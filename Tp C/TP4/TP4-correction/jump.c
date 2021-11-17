#include <stdlib.h>
#include <stdio.h>

int main() {

    int* tab = (int*)calloc( 10, sizeof(int) );
    /* L'erreur valgrind provient du fait que la zone mémoire réservée 
     * par malloc n'est pas initialisée : utiliser un calloc (fonction 
     * mettant tous les bits à 0) permet de corriger ce problème. 
     * Attention : cette fonction a un coût, il ne faut donc pas l'utiliser 
     * pour chaque allocation dynamique réalisée.
     */
    printf("%d\n", tab[3]);

    free(tab);
    return EXIT_SUCCESS;
}
