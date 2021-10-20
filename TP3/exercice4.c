#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool est_trie(int *tableau, int taille);
bool contient_doublons(int *tableau, int taille);


int main(){

	int trie [5] = { 1, 2, 2, 4, 8 };
	int non_trie [5] = { 1, 4, 3, 5, 8 };
	int sans_doublons [5] = { 2, 3, 4, 6, 8 };
	int avec_doublons [5] = { 2, 3, 3, 6, 8 };


	printf("Taille du tableau %lu\n ", sizeof(trie)/sizeof(long unsigned int));
	


	/*if(est_trie(trie,5))
		printf("Tableau trié par ordre  croissant \n");
	else 
		printf("Tableau trié par ordre  décroissant \n");

	if(contient_doublons(avec_doublons,5))
		printf("Tableau ne contenant pas de doublons \n");
	else 
		printf("Tableau contenant des doublons \n");
	*/

	printf("%d\n", est_trie(trie,5));

	printf("%d\n", contient_doublons(avec_doublons,5));

	// int *ptr ; ptr; *ptr

}


bool est_trie(int *tableau, int taille){



	for(int i = 0; i < taille -1; i++){

		if(tableau[i] > tableau[i+1]){
			return false;
		}
	}
	return true;

}


bool contient_doublons(int *tableau, int taille){


	for(int i = 0; i < taille - 1; i++){

		if(tableau[i] == tableau[i+1]){
			return false;
		}
	}
	return true;

}