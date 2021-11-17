#ifndef POLYGONE_H
#define POLYGONE_H

#include "point.h"
#include <math.h>

/* La structure est cachée pour illustrer l'utilisation sur un autre exemple, 
 * mais ce n'était pas demandé dans le sujet.
 * Tout fichier incluant chemin.h ne pourra pas accéder directement aux champs de Chemin
 * */
typedef struct Chemin* chemin;

chemin chemin_aleatoire(size_t,int);
double perimetre(const chemin);

size_t nombre_sommets(const chemin);
point acces(const chemin, int);

void detruire_chemin(chemin*);

#endif
