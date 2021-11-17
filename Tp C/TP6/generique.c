#include "generique.h"


bool egalite(void* val1, void* val2, bool (*est_egal)(void*, void*)){

	return (*est_egal)(val1, val2);

}

bool superieur_ou_egal(void* val1, void* val2, bool (*est_sup_ou_egal)(void*, void*)){

	return (*est_sup_ou_egal)(val1, val2);
}

int superieur_ou_egal_char(void* val1, void* val2, int (*est_sup_ou_egal_char)(void*, void*)){

	return (*est_sup_ou_egal_char)(val1, val2);
}



void afficher(void* val, void (*affiche_elt)(void*)){

	(*affiche_elt)(val);
}


void afficher_tout(nd n, void (*afficher)(void*)){

	(*afficher)(n-> val);
	if(n-> suivant == NULL)
		put("");
	else{
		if(n->suivant != NULL)
			afficher_tout(n-> suivant,afficher);
	}
}

nd creer_noeud(void* elt, void(*copier)(void*,void**)){

	nd resultat = (nd) malloc(sizeof(struct noeud));

	(*copier)


	return nd;
}