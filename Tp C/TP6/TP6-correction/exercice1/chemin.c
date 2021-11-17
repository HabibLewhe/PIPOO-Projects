#include "chemin.h"
#include <math.h>
#include <stdbool.h>

struct Chemin {
    point* points;
    size_t sommets;
};

/* La structure étant cachée, cette fonction devient obligatoire 
 * si on veut accéder au champ sommets depuis la fonction principale
 */
size_t nombre_sommets(const chemin chm) {
    return chm->sommets;
}

/* Même remarque pour accéder à un point précis du tableau
 */
point acces(const chemin chm, int indice) {
    return chm->points[indice];
}

chemin chemin_aleatoire(size_t sommets, int maximum) {
    chemin chm = malloc( sizeof(struct Chemin) );
    chm->sommets = sommets;
    chm->points = calloc( sommets, sizeof(struct Point) );

    for(size_t i = 0; i < sommets; ++i) {
        /* Si la structure Chemin contenait un attribut de type points**
         * la destruction devrait être réalisée en dehors de cette fonction. 
         * De plus, la copie de structure fonctionne correctement ici car 
         * les champs sont des types "simples" (primitifs) ; cela ne serait 
         * plus forcément le cas avec des champs plus complexes (pointeurs)
         */
        point* p = creer(1+rand()%(maximum-3), 1+rand()%(maximum-3));
        chm->points[i] = *p;
        free(p);
    }

    return chm;
}

/* Retourne la distance euclidienne entre deux points */
static double distance(point p1, point p2) {
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}

/* Calcule le périmètre du "polygone" correspondant 
 * (le chemin généré aléatoirement ne correspond pas forcément à un polygone)
 */
double perimetre(const chemin chm) {
    double resultat = 0.;
    for (size_t i = 0; i < chm->sommets-1; ++i) 
        resultat += distance(chm->points[i], chm->points[i+1]);
    resultat += distance(chm->points[nombre_sommets(chm)-1],chm->points[0]);
    return resultat;
}

/* Si la structure Chemin contenait un attribut de type points** 
 * il faudrait détruire _chaque_ point initialisé dans la fonction chemin_aleatoire
 */
void detruire_chemin(chemin* chm) {
    free((*chm)->points);
    free(*chm);
    *chm=NULL;
}
