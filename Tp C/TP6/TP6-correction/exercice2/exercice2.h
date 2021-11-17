#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

bool egalite(void *val_1, void *val_2, bool (*egalite_type)(void*, void*));

bool superieur(void *val_1, void *val_2, bool (*superieur_type)(void*, void*));

void afficher(void * val, void (*afficher_type)(void *));
