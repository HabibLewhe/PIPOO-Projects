#ifndef AGENDA_H
#define AGENDA_H

#include "personne.h"

struct agenda {
    personne* personnes;
    int taille;
};

typedef struct agenda* agenda;

agenda creer_agenda_vide();
void ajouter_personne(agenda, personne p);
void supprimer_agenda(agenda*); 

#endif
