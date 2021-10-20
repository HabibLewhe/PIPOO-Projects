#include "table.h"

/** 
 * 
 * 
 *	 TABLEAU DE POINTEURS SUR ENTIERS 
 * 
 * 
 * **/ 


int* random_tab(int n, int m){

	int *tab = (int *)malloc(n * sizeof(int));

	for(int i = 0; i< n; i++){

		tab[i] = rand() % m;
	}

	return tab;
}

void affiche_tab(int *tab, int taille){

	for(int i = 0; i< taille; i++){
		printf("%d\t", tab[i]);
	}
	puts("\n");
}


/** 
 * 
 * 
 *	 TABLEAU DE N POINTEURS SUR ENTIERS 
 * 
 * 
 * **/



int** random_tab_of_tab(int n, int m){

	int **tab1 = (int **)malloc(n * sizeof(int*));


	for(int i = 0; i< n; i++){

		tab1[i] = (int *)malloc(n * sizeof(int));

		for (int j = 0; j < n; j++)
		{
			tab1[i][j] = rand() % m;
		}

	}

	return tab1;
}

void affiche_tab1(int **tab1, int taille){

	for(int i = 0; i< taille; i++){
		for (int j = 0; j < taille; j++){

			printf("%d\t", tab1[i][j]);

		}
		puts("\n");
	}
	puts("\n");
}



/** 
 * 
 * 	ELEMENT MAJORITAIRE en complexité O(n²)
 * 
 * 
 * **/


int eltMaj(int *tab, int taille){

	int count = 0;

	for (int i = 0; i < taille; i++){
		for(int j = 0; j < taille; j++){


			if(tab[i] == tab[j])
				count++;
		}

		if(count > (taille/2)){

			return tab[i];

		}
			
		else {
			count = 0;
		}

	}

	return -1;

}


/** 
 * 
 * 	ELEMENT MAJORITAIRE en complexité O(n log n)
 * 
 * 
 * **/

int* trier(int *tab, int taille){

	int min = 0;
	int temp = 0;

	for(int i = 0; i < taille; i++){

		min = tab[0];

		if(min > tab[i]){
			min = tab[i];
		}
	}

	printf("le min est %d\n",min);

	for(int i = 0; i < taille; i++){

		tab[i]++;

		/*if(tab[i] > min){

			temp = tab[i];
			tab[i] = min;
			min = temp;
		}*/
	}

	return tab;

}





