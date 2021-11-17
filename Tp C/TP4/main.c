#include <time.h>
#include "table.h"



int main(){


	srand(time(NULL));

	int *tab = random_tab(5,7);

	affiche_tab(tab,5);

	int *tab_trier = trier(tab,5);

	affiche_tab(tab_trier,5);

	//affiche_tab(tab,5);

	//printf("L'element maj est %d\n", eltMaj(tab,5));

	free(tab);

	/*

	int **tab1 = random_tab_of_tab(5,7);

	affiche_tab1(tab,5);

		or

		for(int i = 0; i< 5; i++){
			affiche_tab1(tab[i],5);
		}


	for(int i = 0; i< 5; i++){
			free(tab1[i]);
	}


	free(tab1);
	*/


	

}
