#include "point.h"

point* creer(double x, double y) {
    point* p = malloc( sizeof(struct Point) );
    p->x = x;
    p->y = y;
    return p;
}

void affichage(point* p) {
    printf("[%.2f,%.2f]\n", p->x, p->y);
}

point translation(point p, double dx, double dy) {
    point resultat;
    resultat.x = p.x+dx;
    resultat.y = p.y+dy;
    return resultat;
}

void translation_enplace(point* p, double dx, double dy) {
    p->x+=dx;
    p->y+=dy;
}

void detruire(point* p) {
    free(p);
}

