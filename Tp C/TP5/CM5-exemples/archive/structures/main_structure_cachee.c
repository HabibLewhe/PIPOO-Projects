#include "structure_cachee.h"

int main(void) {

    struct une_struct* s = initialiser_structure("perez", 10);
    afficher_structure(s);

    return EXIT_SUCCESS;

}
