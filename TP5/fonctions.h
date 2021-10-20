#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool palindrome(char *str);
char* newString(char *str1, char *str2);
char* randString(char *str);
char* chiffreDeCesar(char *str, int cle);
void affiche_tab(int *tab, int taille);
char** table_vigenere(int taille);
void affiche_tab1(char **tab1, int taille);

#endif