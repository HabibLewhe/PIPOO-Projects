#include "majorite.h"

/* Implémentation de l'algorithme d'élément majoritaire en O(n^2)
 * @param tab un pointeur sur le premier élément du tableau
 * @param taille le nombre d'éléments à considérer 
 * @return l'élément majoritaire s'il existe, -1 sinon
 */
int element_majoritaire(int *tab, int taille) {
    /* Chaque élément est un candidat potentiel */
    for (int i = 0; i < taille; i++) {
        int candidat = tab[i];
        /* On compte le nombre de fois qu'il apparaît dans le tableau */
        int occurences = 0;
        for(int j = 0; j < taille; j++) {
            if(candidat == tab[j])
                ++occurences;
        }
        /* Si ce nombre est supérieur à n/2 */
        if(occurences > (int)taille/2)
            return candidat;
    }
    return -1;
}

/* L'algorithme en O(nlogn) consiste dans un premier temps à trier 
 * le tableau (par exemple avec un tri fusion, vu en Analyse des Algorithmes)
 * Trouver un élément majoritaire devient ensuite plus simple : il suffit de 
 * compter le nombre de fois qu'un même élément apparaît consécutivement 
 * dans le tableau, et un seul parcours suffit. 
 * Cette version est laissée à faire en exercice
 */

/* Implémentation de l'algorithme de Boyer-Moore 
 * @param tab un pointeur sur le premier élément du tableau
 * @param taille le nombre d'élément à considérer
 * @return l'élément majoritaire s'il existe, -1 sinon */
int boyer_moore(int* tab, int taille) { 
    int count = 0, majoritaire;
    for (int i = 0; i < taille; i++) {
        if (count == 0) {
            majoritaire = tab[i];
            count = 1;
        }
        else if (tab[i] == majoritaire) 
            count++;
        else
            count--;
    }
    /* REMARQUE : par sa définition, l'algorithme de Boyer-Moore 
     * retourne *toujours* un potentiel élément majoritaire. 
     * Un parcours supplémentaire est nécessaire pour vérifier qu'il 
     * apparaît vraiment le bon nombre de fois
     */
    count = 0;
    for (int i = 0; i < taille; i++)
        if (tab[i] == majoritaire)
            count++;
    if (count > taille/2)
        return majoritaire;
    return -1;
}
