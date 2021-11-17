#ifndef POINT_H
#define POINT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Point {
    double x;
    double y;
};

typedef struct Point point;

point* creer(double, double);
void affichage(point*);
point translation(point, double, double);
/* Remarque : pas de surcharge de fonction en C */
void translation_enplace(point*, double, double);

void detruire(point*);

#endif
