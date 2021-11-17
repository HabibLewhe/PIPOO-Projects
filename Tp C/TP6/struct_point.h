#ifndef STRUCT_POINT_H
#define STRUCT_POINT_H


#include <stdio.h>
#include <stdlib.h>



struct Point {

	double x;
	double y;
};

typedef struct Point* point;

point creer_point(double x, double y);
void afficher(point);
point translater_point(point, double dx, double dy);
void modifier_point(point, double dx, double dy);

#endif