#include "structure_cachee.h"

struct une_struct {
    char *nom;
    int note;
};

struct une_struct *initialiser_structure(char* nom, int note) {
    struct une_struct *s = malloc( sizeof( struct une_struct) );
    (*s). nom = nom;
    (*s).note = note;
    return s;
}

void afficher_structure(struct une_struct *s) {
    printf("%s \t %d\n", (*s).nom, (*s).note);
}
