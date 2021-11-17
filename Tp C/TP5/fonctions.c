#include "fonctions.h"


bool palindrome(char *str){

	int lenght = strlen(str);

	//str = malloc(lenght+1 * sizeof(char));

	if(lenght == 0){
		return false;
	}
	else{
		for(int i=0; i < lenght/2; i++){

			if(str[i] != str[lenght-1-i])
				return false;
		}

		return true;
	}

	//free(str);
}


char* newString(char *str1, char *str2){

	int lenght1 = strlen(str1);
	int lenght2 = strlen(str2);
	int lenght3 = (lenght1+lenght2+1);

	char  *str3 = malloc(lenght3 * sizeof(char));

	/*
	char *str5 = strcat(strcat(str4,str1), str2);

	printf("Ceci est la concatenation de str1 et str2 : %s\n", str5);*/

	for(int i=0; i < lenght1; i++){
		str3[i] = str1[i];
	}

	for(int i=0; i < lenght2; i++){
		str3[lenght1+i] = str2[i];
	}

	return str3;

}


char* randString(char *str){

	int lenght = strlen(str);

	int position = rand() % lenght;

	str[position] = 97 + rand() % 26;

	return str;
}


char* chiffreDeCesar(char *str, int cle){

	int lenght = strlen(str);

	for(int i=0; i < lenght; i++){

		str[i] = ((str[i]-65) + cle) % 26 + 65;
	}

	return str;

}


char** table_vigenere(int taille){


	char **tab = malloc(taille * sizeof(char*));

	for(int i=0; i < taille; i++){

		tab[i] = malloc(taille * sizeof(char));

		for(int j=0; j < taille; j++){

		tab[i][j] = ((i+j)%26) + 65;

		}
	}

	return tab;
}

void affiche_tab1(char **tab1, int taille){

	for(int i = 0; i< taille; i++){
		for (int j = 0; j < taille; j++){

			printf("%c\t", tab1[i][j]);
			
		}
		puts("\n");
	}
	puts("\n");
}

void affiche_tab(int *tab, int taille){

	for(int i = 0; i< taille; i++){
		printf("%d\t", tab[i]);
	}
	puts("\n");
}

