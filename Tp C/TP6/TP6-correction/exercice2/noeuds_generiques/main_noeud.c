#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#include "noeud_generique.h"

void* _copier_int(void* _val) {
    int *ptr = (int*)malloc(sizeof(int));
    memcpy(ptr,_val,sizeof(int));
    return ptr;
}

void _afficher_int(void* _val) {
    int *a_afficher = (int*)_val;
    printf("%d ",*a_afficher);
}

void _detruire_int(void** _val) {
    free(*_val);
    /* La zone mémoire pointée par *_val étant libérée, il est 
     * plus prudent de pointer sur NULL : cela explique l'argument de 
     * type void**, puisqu'on veut modifier la valeur du pointeur 
     * (et pas uniquement libérée la zone mémoire pointée)
     */
    *_val = NULL;
}

int main() {

    int a = 0;
    nd n = creer_noeud(&a,&_copier_int);

    for (int i=0; i<9; i++) {
        int aa = i + 1;
        ajouter_noeud_fin(n, &aa, &_copier_int);
    }

    afficher_tout(n,&_afficher_int);

    for (int i=0; i<9; i++) 
        supprimer_noeud_fin(n,&_detruire_int);
   
    detruire_tout(&n,&_detruire_int);

    return EXIT_SUCCESS;
}
