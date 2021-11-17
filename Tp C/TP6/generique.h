#ifndef GENERIQUE_H
#define GENERIQUE_H


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


bool egalite(void* val1, void* val2, bool (*est_egal)(void*, void*));
bool superieur_ou_egal(void* val1, void* val2, bool (*est_sup_ou_egal)(void*, void*));
int superieur_ou_egal_char(void* val1, void* val2, int (*est_sup_ou_egal_char)(void*, void*));
void afficher(void* val, void (*affiche_elt)(void*));

/*  NOEUD  */

struct noeud {

	void* val;
	struct noeud* suivant;

};

typedef struct noeud* nd;


void afficher_tout(nd n, void (*afficher)(void*));



#endif