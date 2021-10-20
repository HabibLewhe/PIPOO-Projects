# compilateur
CC := gcc

# options de compilation
CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-abi
LFLAGS := -lm -l
# les options -Wno-unused-variable -Wno-unused-parameter
# sont recommandées mais non obligatoires
EXEC := executable

# all est la cible par défaut choisie par la commande make
# elle dépend de la règle executable, qui va être réalisée
# en fonction de la description donnée dans la suite

all : $(EXEC)
 
run : $(EXEC)
	./executable

run_pascal : 
	./pascal

# executable: fonctions.o main.o
# 	$(CC) $(CFLAGS) -o executable fonctions.o main.o

# fonctions.o : fonctions.c
# 	$(CC) $(CFLAGS) -o fonctions.o -c fonctions.c

# main.o : main.c fonctions.h
# 	$(CC) $(CFLAGS) -o main.o -c main.c



# executable: fonctions.o main.o
# 	$(CC) $(CFLAGS) -o $@ $^

# fonctions.o : fonctions.c
# 	$(CC) $(CFLAGS) -o $@ -c $^

# main.o : main.c fonctions.h
# 	$(CC) $(CFLAGS) -o $@ -c $<


executable: fonctions.o main.o
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

main.o : fonctions.h


# pascal


pascal : catalan.o pascal.o main_ifndef.o fonctions.o
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

main_ifndef.o : pascal.h catalan.h 




# pascal : catalan.o pascal.o main_ifndef.o fonctions.o
# 	$(CC) $(CFLAGS) -o $@ $^

# catalan.o : catalan.c 
# 	$(CC) $(CFLAGS) -o $@ -c $^

# pascal.o : pascal.c 
# 	$(CC) $(CFLAGS) -o $@ -c $^

# main_ifndef.o : main_ifndef.c pascal.h catalan.h 
# 	$(CC) $(CFLAGS) -o $@ -c $< 




# pascal : catalan.o pascal.o main_ifndef.o fonctions.o
# 	$(CC) $(CFLAGS) -o pascal catalan.o pascal.o main_ifndef.o fonctions.o

# catalan.o : catalan.c 
# 	$(CC) $(CFLAGS) -o catalan.o -c catalan.c

# pascal.o : pascal.c 
# 	$(CC) $(CFLAGS) -o pascal.o -c pascal.c

# main_ifndef.o : main_ifndef.c pascal.h catalan.h 
# 	$(CC) $(CFLAGS) -o main_ifndef.o -c main_ifndef.c



clean:	
	rm -fr *.o 

valgrind:
	./executable

mrproper: clean
	rm -fr $(EXEC)


# déclaration des fichiers objets nécessaires à la création de executable
executable : fonctions.o main.o