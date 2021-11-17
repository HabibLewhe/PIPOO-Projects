#include "structure_cachee.h"

int main(void) {

    struct une_struct s;

    // erreur : le compilateur ne connait pas une_struct
    s.nom = "perez";
    s.note = 10;

    return EXIT_FAILURE;

}
