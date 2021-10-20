#include <stdio.h>
#include <stdlib.h>


// sizeof(variable)  retourne la taille memoire occupée par la variable (en octet)

int main(){

	int trie [5] = { 1, 2, 2, 4, 8 };
	int non_trie [5] = { 1, 4, 3, 5, 8 };
	int sans_doublons [5] = { 2, 3, 4, 6, 8 };
	int avec_doublons [5] = { 2, 3, 3, 6, 8 };


	for(int i = 0; i < 4; i++){

		if(trie[i] > trie[i+1]){
			printf("Le tableau n'est pas trié par ordre croissant. \n");
			break;

		}
	}


	for(int i = 0; i < 4; i++){
		for(int j = i; j < 5; j++){

			if(avec_doublons[i] == avec_doublons[j]){
				printf("Le tableau contient des doublons. \n");
				break;

			}
		}

	}


}