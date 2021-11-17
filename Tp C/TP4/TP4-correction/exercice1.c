#include "exercice1.h"

/* Procédure permettant d'afficher un tableau de taille entiers, 
 * représenté par un pointeur sur son premier élément
 * @param tableau un pointeur sur entier (le premier élément à afficher)
 * @param taille le nombre d'éléments à afficher
 */
void afficher_tableau(int *tableau, int taille) {
    for(int i = 0; i < taille; ++i)
        printf("%d\t", tableau[i]);
    puts("");
}

/* Fonction réservant dynamiquement l'espace mémoire pour n entiers, 
 * initialisant les valeurs entre 0 et m 
 * et retournant un pointeur sur l'adresse correspondante
 * @param n le nombre d'éléments (de type int) à réserver
 * @param m la valeur maximum prise par les éléments
 * @return l'adresse de la zone mémoire réservée
 */
int* tableau_aleatoire(int n, int m) {
    /* malloc retourne un pointeur de type void* */
    /* conversion implicite de void* vers int* 
     * int *tableau = malloc( n * sizeof(int) );
     */
    int *tableau = (int *)malloc( n * sizeof(int) );
    for(int i = 0; i < n; ++i)
        tableau[i] = rand()% m;
    return tableau;
}

/* Fonction réservant dynamiquement l'espace mémoire pour n 
 * pointeurs sur entiers, eux-mêmes pointant sur une zone mémoire 
 * réservée dynamiquement pour n entiers
 * Les valeurs sont initialisées entre 0 et m 
 * et un pointeur sur l'adresse correspondante est retourné
 * @param n le nombre d'éléments (de type int) à réserver
 * @param m la valeur maximum prise par les éléments
 * @return l'adresse de la zone mémoire réservée
 */
int** matrice_aleatoire(int n, int m) {
    /* Allocation mémoire pour n pointeurs sur entier */
    int** matrice = (int**)malloc( n * sizeof(int*) );
    /* Chaque élément de matrice est de type int* : il faut 
     * maintenant réserver la mémoire pour créer les tableaux associés 
     */
    for(int i = 0; i < n; ++i) {
        /* Une autre possibilité qui fonctionne correctement 
         * matrice[i] = tableau_aleatoire(n,m); 
         */
        matrice[i] = (int*) malloc( n * sizeof(int) );
        for (int j = 0; j < n; ++j) 
            matrice[i][j] = rand() % m;
    }
    return matrice;
}
