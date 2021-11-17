#include "struct_point.h"

void afficher(point p){

	printf("Coordonnées du point : [%.2f\t %f\n] ", (*p).x, (*p).y);

}

point creer_point(double x, double y){

	point p = malloc(sizeof(struct Point));

	(*p).x = x;
	p -> y = y;

	return p;
}

point translater_point(point p, double dx, double dy){

	point res;
	res->x = p->x + dx;
	res->y = p->y + dy;

	return res;
}


void modifier_point(point p, double dx, double dy){

	p -> x = p->x + dx;
	p -> y = p->y + dy;
}


