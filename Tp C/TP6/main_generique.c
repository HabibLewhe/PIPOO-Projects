#include "generique.h"


bool est_egal_int(void* val1, void* val2){

	return (int*)val1 == (int*)val2;
}

bool est_sup_ou_egal_int(void* val1, void* val2){
	int* a = (int*)val1;
	int * b = (int*)val2;

	return *a >= *b;
}

bool est_sup_ou_egal_double(void* val1, void* val2){
	double* a = (double*)val1;
	double* b = (double*)val2;

	return *a >= *b;
}


int compare_char(void* val1, void* val2){
	char* a = (char*)val1;
	char* b = (char*)val2;
	int ret = 0;

	ret = strcmp(a, b);

	
   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   
   return EXIT_SUCCESS;
}

void afficher_int(void* val){

	int* a_afficher = (int*)val;

	printf("%d\n", *a_afficher);
}


int main(){

	char str1[15];
	char str2[15];


	strcpy(str1, "Habibe");
	strcpy(str2, "Fatou");

	//printf("%d\n", superieur_ou_egal((void*) &a, (void*) &b, &est_sup_ou_egal_int));

	superieur_ou_egal_char((void*) &str1, (void*) &str2, &compare_char);
}