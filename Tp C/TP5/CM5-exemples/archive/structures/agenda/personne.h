#ifndef PERSONNE_H
#define PERSONNE_H

#include <stdlib.h>
#include <stdio.h>

struct personne {
    char* nom;
    char* prenom;
    int age;
};

typedef struct personne* personne;

personne creer_personne_vide();
personne creer_personne(char*, char*, int);

#endif
