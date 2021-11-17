#include "structure_cachee_typedef.h"

struct une_struct {
    char* nom;
    int note;
};

structure initialiser_structure(char* nom, int note) {
	structure s = malloc( sizeof( struct une_struct) );
	(*s). nom = nom;
	(*s).note = note;
	return s;
}

void afficher_structure(structure s) {
    printf("%s \t %d\n", (*s).nom, (*s).note);
}
