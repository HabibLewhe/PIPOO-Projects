#include "noeud_generique.h"

/* La fonction copier est nécessaire pour décrire comment copier 
 * la valeur pointée par le pointeur générique ; cette dernière 
 * retourne un pointeur sur la nouvelle zone mémoire allouée (et copiée)
 */
nd creer_noeud(void *elt, void* (*copier)(void *)) {
    nd nouveau = (nd)malloc( sizeof(struct noeud) );
    nouveau->val = (*copier)(elt);
    nouveau->suivant = NULL;
    return nouveau;
}

void afficher_tout(nd n, void (*afficher)(void *)) {
    (*afficher)(n->val);
    if(n->suivant == NULL) 
        puts("");
    else {
        if(n->suivant != NULL) 
            afficher_tout(n->suivant, afficher);
    }
}

void ajouter_noeud_fin(nd n, void *i, void* (*copier)(void *)) {
    nd a_ajouter = creer_noeud(i, (*copier));
    nd parcours = n;
    while(parcours->suivant != NULL)
        parcours = parcours->suivant;
    parcours->suivant = a_ajouter;
}

void supprimer_noeud_fin(nd n, void (*detruire)(void **)) {
    if(n != NULL) {
        if(n->suivant == NULL) {
            detruire(&(n->val));
            free(n);
            /* Si on voulait faire pointer n sur NULL, l'argument 
             * devrait être un pointeur sur nd, soit nd* (voir detruire_tout)
             */
        }
        else {
            nd parcours = n;
            while((parcours->suivant)->suivant) 
                parcours = parcours->suivant;
            detruire(&(parcours->suivant->val));
            free(parcours->suivant);
            parcours->suivant = NULL;
        }
    }
}

void detruire_tout(nd* n, void (*detruire)(void **)) {
    if(*n != NULL) {
        if((*n)->suivant != NULL) {
            detruire_tout(&((*n)->suivant), detruire);
        }
    }
    (*detruire)(&((*n)->val));
    free(*n);
    /* L'instruction suivante est faite par prudence : lorsque la zone mémoire 
     * vers laquelle pointe un pointeur est libérée, il est préférable 
     * de changer la valeur du pointeur vers NULL (pour éviter qu'il continue à pointer 
     * vers une zone mémoire qui a été libérée par l'exécution du programme)
     * C'est pour cette raison que l'argument est de type nd* 
     */
    *n = NULL;
}
