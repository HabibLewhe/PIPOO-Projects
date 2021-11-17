#ifndef TABLE_H
#define TABLE_H

#include <stdio.h>
#include <stdlib.h>


int* random_tab(int n, int m);
void affiche_tab(int *tab, int taille);
int** random_tab_of_tab(int n, int m);
void affiche_tab1(int **tab1, int taille);
int eltMaj(int *tab, int taille);
int* trier(int *tab, int taille);

#endif