#include <stdio.h>
#include <stdlib.h>



struct noeud {

	int val;
	struct noeud* suivant;

};

typedef struct noeud* nd;


nd creer_noeud(int elt);


int main(){

}


nd creer_noeud(int elt){

	nd n = malloc(sizeof(struct noeud));

	(*n).val = elt;
	n->suivant = NULL;

	return n;
}

void ajouter_noeud_fin(nd n, int i){

	nd ajouter = creer_noeud(i);

	nd parcours = n;

	while(parcours-> suivant != NULL){

		parcours = parcours-> suivant;
	}

	parcours-> suivant  = ajouter;
}


void afficher_tout(nd n){

	if(n != NULL){
		nd parcours = n;

		while(parcours-> suivant != NULL){

			parcours = parcours-> suivant;

			printf("%d", parcours->val)
		}
	}
}

void supprimer_noeud_fin(nd n){

	if(n != NULL){

		if(n == NULL){
			free(n);
		}else{

			nd parcours = n;

			while(parcours-> suivant != NULL){

				parcours = parcours-> suivant;
			}

			free(parcours -> suivant);
			parcours -> suivant  = NULL;
		}

	}
}


void detruire_tout(nd* n){

	
}