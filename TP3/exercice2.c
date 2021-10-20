#include <stdio.h>
#include <stdlib.h>


void carree(int a);
void echanger(int a, int b);

void echanger_ptr(int*, int*);

void trier(int*, int*, int*);

int main(){

	int a = 0;
	int b = 0;

	// scanf("%d", &a);
	//carree(a);

	scanf("%d %d", &a, &b);
	//echanger(&a, &b);
	echanger_ptr(&a,&b);

	return EXIT_SUCCESS;

}

void carree(int a){

	int *ptr_a = &a;

	*ptr_a = a*a;

	// void (int *a)

	//(*a) = (*a) * (*a)

	printf("%d\n", a);
}

void echanger(int a, int b){

	//echanger (int *a, int *b)

	int *ptr_a = &a;
	int *ptr_b = &b;

	printf("valeurs de a %d et b %d avant echange :\n ", a, b);

	int c = a;

	*ptr_a = b;

	*ptr_b = c;

	printf("valeurs de a %d et b %d	après echange :\n ", a, b);

}

void echanger_ptr(int *a, int *b){


	printf("%d %d\n", *a, *b);
	
	int c = *a;

	*a = *b;

	*b = c;

	printf("%d %d\n", *a, *b);

}


void trier(int *a, int *b, int *c){


	if(*a > *b) echanger_ptr(a,b);

	if(*b > *c) echanger_ptr(b,c):




}

