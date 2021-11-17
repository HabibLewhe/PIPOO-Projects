#include "exercice2.h"

void afficher_int(void *val) {
    /* Conversion du pointeur générique en pointeur sur entier */
    int* a_afficher = (int*)val;
    /* Affichage de la valeur entière avec printf et déréférencement */
    printf("%d\n",*a_afficher);
}

bool egalite_int(void *val_1, void *val_2) {
    return *((int*)val_1) == *((int*)val_2);
}

bool superieur_int(void *val_1, void *val_2) {
    int* a = (int*)val_1;
    int* b = (int*)val_2;

    return *a >= *b;
}

int main(int argc, char** argv) {
    srand(time(NULL));
    int val_1 = atoi(argv[1]);
    int val_2 = atoi(argv[2]);

    puts("Arguments saisis");
    afficher(&val_1, &afficher_int);
    afficher(&val_2, &afficher_int);
    printf("Egalite : %d\n", egalite(&val_1, &val_2, &egalite_int));
    printf("Supérieur ou égal : %d\n", superieur(&val_1, &val_2, &superieur_int));

    return EXIT_SUCCESS;
}

