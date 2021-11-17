//
// Created by PIPOO on 27/08/18.
//

#ifndef NOEUD_H
#define NOEUD_H

#include <stdlib.h>
#include <stdio.h>

struct noeud {
    void *val;
    struct noeud* suivant;
};

typedef struct noeud* nd;

nd creer_noeud(void* elt, void* (*copier)(void*));
void afficher_tout(nd n, void (*afficher)(void*));
void ajouter_noeud_fin(nd n, void *i, void* (*copier)(void*));

void supprimer_noeud_fin(nd n, void (*detruire)(void **));
void detruire_tout(nd* n, void (*detruire)(void **));

#endif 
