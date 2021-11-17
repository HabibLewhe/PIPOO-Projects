#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>
#include <math.h>
#include <assert.h>

int premier(int n);
bool premier_bool(int n);
int premier_opt(int n);
int fibbonacci_ittr(int n);
int fibbonacci_rec(int n);
void syracuse_ittr(int n);
void syracuse_rec(int n);
int facto_rec(int n);
long coefficient(int n, int p);
int produit_rec(int n);
int produit_ittr(int n);




int main(){

	int nbr = 0;

	int p = 0;

	printf("Entrez un nombre : ");
	scanf("%d", &nbr);

	//scanf("%d", &p);

	//premier(nbr);

	//premier_opt(nbr);

	// if(premier_bool(nbr))
	// 		printf("Premier\n");
	// else 
	// 	printf("Non premier \n");

	//printf("%d\n", fibbonacci_rec(nbr));

	//syracuse_ittr(nbr);

	//printf("%d\n", facto_rec(nbr));

	//printf("%ld\n", coefficient(nbr,p));


	printf("%d\n", produit_ittr(nbr));

	return EXIT_SUCCESS;
}


int premier(int n){

	int compteur =0;

	int som = 0;

	for (int i = 1; i <= n; i++){

		if( n%i == 0){
			compteur ++;
			printf("%d\n",i);

			som += i;
		}

	}

	if ( compteur  == 2 && som == (n+1))
		printf("Premier\n");
	else 
		printf("Non premier \n");

	return EXIT_SUCCESS;
}

int premier_opt(int n){

	for(int i = 2; i<= sqrt(n); i++){

		if(n%i == 0)
			printf("Non premier\n");
		break;
	}

	printf("Premier \n");

	return EXIT_SUCCESS;
}



bool premier_bool(int n){


	int compteur =0;

	int som = 0;

	for (int i = 1; i <= n; i++){

		if( n%i == 0){
			
			compteur ++;
			printf("%d\n",i);

			som += i;
		}

	}

	return (compteur  == 2 && som == (n+1));
}


bool premier_bool_opt(int n){

	for(int i = 2; i<= sqrt(n); i++){

		if(n%i == 0)
			return false;
		break;
	}

	return true;

}


int fibbonacci_ittr(int n){

	int first = 1;
	int second = 1;
	int tmp = 0;

	if (n == 0 )
		printf("0\n");

	else if( n== 1 || n == 2)
		printf("1\n");
	else 
		for(int i = 2; i <= n; i++){

			tmp = first + second;
			first = second;
			second = tmp;
		}
		

	return first;
}

int fibbonacci_rec(int n){

	if(n < 2)
		return n;
	else 
		return fibbonacci_rec(n - 1) + fibbonacci_rec(n - 2);
}


void syracuse_ittr(int n){

	while( n!= 1){

		 if (n%2 == 0)
		 	n = n/2;
		 else
		 	n = (n*3) +1; 

		printf("%d\t", n);
	}

	printf("\n");

}

void syracuse_rec(int n){

	printf("%d\t", n);

	if(n == 1)
		printf("\n");

	else if(n%2 == 0)
		syracuse_rec(n/2);
		
	else 
		syracuse_rec( (n*3)+1 );

}


int facto_rec(int n){

	if(n == 1)
		return n;
	else 
		return n * facto_rec(n-1);
}


long coefficient(int n, int p){

	assert(n >= p);

	if ( p==0 || p==n)
		return 1;
	else
		coefficient((n-1),(p-1)) + coefficient((n-1),(p));
}


int produit_ittr(int n){

	int somme = 1; 

	while(n!=0){

		somme *= (n%10);

		n = n/10;
	}

	return somme;
}

int produit_rec(int n){

	if(n == 0)
		return n;
	else
		return (n/10) * produit_rec(n%10);

}
