# compilateur
CC := gcc
# options de compilation
CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-unused-variable -Wno-unused-parameter
EXO1 := exercice1
JUMP := jump
EXO2 := exercice2

# all est la cible choisie par défaut par la commande make
# elle dépend de la règle $(EXEC), qui va être réalisée
# NOTE --- les cibles ne doivent pas avoir le même nom qu'un fichier
all : $(EX01) $(EXO2) $(EXO3)

# déclaration des fichiers objets nécessaires à la création de $(EXEC)
# exécutée avec la commande make $(EXEC)
$(EXO1) : exercice1.o main_exercice1.o
# instructions de compilation
# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^

$(EXO2) : exercice1.o majorite.o main_exercice2.o
# instructions de compilation
# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^

$(JUMP) : jump.o
# instructions de compilation
# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^

# règle générale pour la génération des .o
# $(EXEC) dépend de fonctions.o et main.o, qui seront donc exécutés 
# via cette règle en premier lieu
%.o : %.c
# la génération des fichiers .o dépend de fichiers .c 
# (aucune cible ne correspondant à ces derniers, l'instruction est exécutée)
# $< correspond à chaque dépendance prise les unes à la suite des autres 
	$(CC) $(CFLAGS) -o $@ -c $<

# règle de nettoyage (supprimant les fichiers .o), ne dépendant d'aucune autre règle
clean : 
	rm *.o  $(EXO1) $(EXO2) $(JUMP)

run1 : $(EXO1)
	./$(EXO1)
run2 : $(EXO2)
	./$(EXO2)

memoire1 : $(EXO1)
	valgrind ./$(EXO1)
memoire2 : $(EXO2)
	valgrind ./$(EXO2)
memoirejump : $(JUMP)
	valgrind ./$(JUMP)
