#include "fonctions.h"


int main(){

	int nbr = 0;

	int p = 0;

	printf("Entrez un nombre : ");
	scanf("%d", &nbr);

	scanf("%d", &p);

	printf("%ld\n", coefficient(nbr,p));

	//printf("%d\n", facto_rec(nbr));

	return EXIT_SUCCESS;
}