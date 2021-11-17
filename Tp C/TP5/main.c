#include <time.h>
#include "fonctions.h"

int main() {

	srand(time(NULL));

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
	printf("%s\n", ptr);*/

	/*char *chaine = "kalak";
	printf("%d\n", palindrome(chaine));

	char *str1 = "Habib";
	char *str2 = "Lewhe";

	char *str3 = newString(str1, str2);

	printf("Ceci est la concatenation de str1 et str2 : %s\n", str3);

	char mot[7] = "Habib";
	char *str4 = randString(mot);

	printf("Ceci est la nouvelle chaine : %s\n", str4);

	free(str3);

	char m1[16] = "CHIFFREDECESAR";

	printf("Chaine avant chiffrement : %s\n", m1);

	char *str5 = chiffreDeCesar(m1,6);

	printf("Nouvelle chaine après chiffrement : %s\n", str5);*/

	affiche_tab1(table_vigenere(26), 26);


	return EXIT_SUCCESS;
}