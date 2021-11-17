# compilateur
CC := gcc
# options de compilation
CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-unused-variable -Wno-unused-parameter
POINT := point
GENERIQUE := generique
JUMP := jump


# all est la cible choisie par défaut par la commande make
# elle dépend de la règle $(EXEC), qui va être réalisée
# NOTE --- les cibles ne doivent pas avoir le même nom qu'un fichier
all : $(POINT) $(GENERIQUE) $(EXO3)

# déclaration des fichiers objets nécessaires à la création de $(EXEC)
# exécutée avec la commande make $(EXEC)
$(POINT) : struct_point.o main_point.o
# instructions de compilation
# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^

$(GENERIQUE) : generique.o main_generique.o
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
	rm *.o  $(POINT) $(GENERIQUE) $(JUMP)

run_point : $(POINT)
	./$(POINT)
run_generique : $(GENERIQUE)
	./$(GENERIQUE)

memoire_point : $(POINT)
	valgrind --leak-check=full ./$(POINT)
memoire_generique : $(GENERIQUE)
	valgrind --leak-check=full ./$(GENERIQUE)
memoirejump : $(JUMP)
	valgrind ./$(JUMP)
