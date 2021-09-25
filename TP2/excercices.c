#include <stdio.h>
#include <stdlib.h>


int premier(int n);


int main(){

	int nbr = 0;
	printf("Entrez un nombre : ");
	scanf("%d", &nbr);

	premiere(nbr);

	return EXIT_SUCCESS;
}


int premier(int n){

	int n = 0;

	int compteur =0;

	int som = 0;

	for (int i = 1; i <= 7; i++){

		if( n%i == 0){
			compteur ++;
			printf("%d\n",i);

			som += i;
		}

	}

	if ( som == n+1)
		printf("Premier\n");
	else 
		printf("Non premier \n");
}