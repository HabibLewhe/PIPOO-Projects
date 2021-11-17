#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool Munchaussen(int n);

int main(){

	int nbr = 3145;

	int copie = nbr;

	// decomposre le nonmbre 
	//printf("%d\t %d\t\n", nbr/10, nbr%10);


	if (Munchaussen(nbr))
		printf("\nLe nombre %d est un nombre de Munchaussen\n", copie);
	else 
		printf("\nLe nombre %d n'est pas un nombre de Munchaussen\n", copie);

	return EXIT_SUCCESS;
}


bool Munchaussen(int n){


	int copie = n;

	int somme = 0;

	// faire la somme de chacun des chiffres du nombre élévé à leur puissance
	while(n !=0){

		somme += pow(n%10, n%10);

		n = n/10;
	}

	// comparer le résultat obtenu au nombre initial

	return (copie == somme);

}




//gcc -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-abi -Wno-unused-variable -Wno-unused-parameter -o
