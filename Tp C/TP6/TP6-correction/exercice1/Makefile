CC := gcc
CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-unused-variable -Wno-unused-parameter
LFLAGS := -lm

all : chemin

point : point.o main_point.o
	# instructions de compilation
	# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^

chemin : point.o chemin.o main_chemin.o
	# instructions de compilation
	# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)

exercice2 : exercice2.o main_exercice2.o
	# instructions de compilation
	# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)

%.o : %.c
	# la génération des fichiers .o dépend de fichiers .c 
	# (aucune cible ne correspondant à ces derniers, l'instruction est exécutée)
	# $< correspond à chaque dépendance prise les unes à la suite des autres [A VERIFIIER]
	$(CC) $(CFLAGS) -o $@ -c $<

# règle de nettoyage (supprimant les fichiers .o), ne dépendant d'aucune autre règle
# TODO --- regarder comment proprement supprimer les exécutables
clean : 
	rm *.o point chemin

run_point : point
	./point
run_chemin : chemin
	./chemin

# règle pour exécuter valgrind, dépend donc de la création de l'executable
memoire_point : point
	valgrind ./$<
memoire_chemin : chemin
	valgrind ./$<

