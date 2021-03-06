CC = gcc
CFLAGS = -W -Wall -ansi -std=c99
LIBS = -L./SDL2_ttf/.libs/ -lm
LDFLAGS = `sdl2-config --libs` -lSDL2_ttf
INCLUDES = `sdl2-config --cflags` -lSDL2_ttf
#Nom de l'executable :
EXEC = main
#Modifier les sources :
SRC = fonctions_SDL.c fonctions_ttf.c ressources.c affichage.c event.c sprite.c joueur.c ennemis.c vortex.c terrain.c jeu.c menu.c level.c main.c
OBJ = $(SRC:.c=.o)

all: $(EXEC)
main: $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^ $(LIBS) $(LDFLAGS)
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf *.o tests/*.o *~ $(EXEC)
mrproper: clean
	rm -rf $(EXEC)
doc: $(PROG)
	doxygen ./$(PROG)
	make -C latex
push :
	git push https://gitlab.univ-lorraine.fr/mathieus1u/projet_prog_avancee
	git push https://github.com/Amaroke/projet_prog_avancee.git
