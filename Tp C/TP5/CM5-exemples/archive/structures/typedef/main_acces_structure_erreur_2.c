#include "structure_cachee_typedef.h"

int main(void) {

    structure s = initialiser_structure("perez", 10);
    (*s).nom = "perez";
    afficher_structure(s);

    return EXIT_SUCCESS;

}
