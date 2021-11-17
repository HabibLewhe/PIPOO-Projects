# compilateur
CC := gcc
# options de compilation
CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-unused-variable -Wno-unused-parameter
NOEUD := noeud
LISTE := liste

# all est la cible choisie par défaut par la commande make
# elle dépend de la règle $(NOEUD), qui va être réalisée
# NOTE --- les cibles ne doivent pas avoir le même nom qu'un fichier
all : $(LISTE)

# déclaration des fichiers objets nécessaires à la création de $(NOEUD)
# exécutée avec la commande make $(NOEUD)
$(NOEUD) : noeud_generique.o main_noeud.o 
# instructions de compilation
# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^

$(LISTE) : noeud_generique.o liste_generique.o main.o 
# instructions de compilation
# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^

# règle générale pour la génération des .o
# $(NOEUD) dépend de fonctions.o et main.o, qui seront donc exécutés 
# via cette règle en premier lieu
%.o : %.c
# la génération des fichiers .o dépend de fichiers .c 
# (aucune cible ne correspondant à ces derniers, l'instruction est exécutée)
# $< correspond à chaque dépendance prise les unes à la suite des autres 
	$(CC) $(CFLAGS) -o $@ -c $<

run_noeud : $(NOEUD)
	./$(NOEUD)

run_liste : $(LISTE)
	./$(LISTE)

memoire_liste : $(LISTE)
	valgrind --leak-check=full ./$(LISTE)

memoire_noeud : $(NOEUD)
	valgrind -s --leak-check=full ./$(NOEUD)

# règle de nettoyage (supprimant les fichiers .o), ne dépendant d'aucune autre règle
clean : 
	rm *.o  $(NOEUD) $(LISTE) 
