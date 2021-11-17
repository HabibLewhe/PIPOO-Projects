#include "point.h"

int main() {
    point* p = creer(10.2,3.5);

    affichage(p);
    point r = translation(*p, 2, 5);

    affichage(&r);

    translation_enplace(&r, -2, -5);
    affichage(&r);

    detruire(p);
    p = NULL;

    return EXIT_SUCCESS;
}
