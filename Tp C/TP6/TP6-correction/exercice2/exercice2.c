#include "exercice2.h"

bool egalite(void *val_1, void *val_2, bool (*egalite_type)(void*, void*)) {
    return egalite_type(val_1, val_2);
}

bool superieur(void *val_1, void *val_2, bool (*superieur_type)(void*, void*)) {
    return superieur_type(val_1, val_2);
}

void afficher(void * val, void (*afficher_type)(void *)) {
    (*afficher_type)(val);
}
