#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool palindrome(char *str)

int main() {
	/*char une_chaine[10] = "Chaine";
	printf("une_chaine : %s %lu %lu\n", une_chaine,
	sizeof(une_chaine), strlen(une_chaine));

	char* ptr = "Chaine";
	printf("chaine_sans_taille : %s %lu %lu\n", ptr,
	sizeof(ptr), strlen(ptr));*/


	/*char une_chaine[7] = "Chaine";
	printf("une_chaine : %s %lu %lu\n", une_chaine,
	sizeof(une_chaine), strlen(une_chaine));

	char *ptr = "Chaine";
	printf("%s\n", ptr);
	ptr = "Autre chaine";
	printf("%s\n", ptr);
*/




	return EXIT_SUCCESS;
}

bool palindrome(char *str){

	lenght = strlen(str);

	if(lenght == 0){
		return false;
	}
	else{
		for(int i=0; i < lenght; i++){

			if(str[i] != str[lenght-1-i])
				return false
		}

		return true;
	}
	
}