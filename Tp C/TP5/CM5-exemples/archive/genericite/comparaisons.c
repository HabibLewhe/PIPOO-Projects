#include "comparaisons.h"

bool egalite( void *val_1, 
              void *val_2, 
              bool(*est_egal)(void*, void*)) {
    return (*est_egal)(val_1, val_2);
}
