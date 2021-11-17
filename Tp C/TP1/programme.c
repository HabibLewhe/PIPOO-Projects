/* Inclusion des librairies standard */
#include <stdlib.h> // EXIT_SUCCESS
#include <stdio.h> // Fonctions usuelles (printf, ...) 

int main(int argc, char** argv) {

    printf("Affichage d'un entier avec retour à la ligne : %d\n", 5);


    int entier = 6;
    int res = 0;

    for (int i = 1; i < entier; i++) {

        if(entier %i == 0){
            res += i;
        }
    }

    if(res == entier) {
        printf("%d est un entier parfait \n", res);
    }else{
        printf("%d n'est pas un entier parfait \n", res);
    }

    

    /* EXIT_SUCCESS est une constante définie à la valeur 0
     * #define	EXIT_SUCCESS	0
     */
    return EXIT_SUCCESS;

}
