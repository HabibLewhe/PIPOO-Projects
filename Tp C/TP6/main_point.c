#include "struct_point.h"

int main(){

	point p;

	p = creer_point(2,2);
	afficher(p);
	translater_point(p,6,2);
	afficher(p);
	modifier_point(p,4,7);
	afficher(p);

	free(p);

}