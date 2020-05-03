all : projet_g1 

projet_g1: main.o menu.o formulaire.o eleves.o ecran.o 
	gcc -o projet_g1 main.o menu.o formulaire.o eleves.o  ecran.o   -Wall

main.o: main.c menu.h
	gcc -o main.o -c main.c -Wall

menu.o: menu.c formulaire.h  eleves.h
	gcc -o menu.o -c menu.c  -Wall

formulaire.o : formulaire.c eleves.h ecran.h
	gcc -o formulaire.o  -c formulaire.c -Wall

eleves.o : eleves.c
	gcc -o eleves.o -c eleves.c -Wall

ecran.o: ecran.c
	gcc -o ecran.o -c ecran.c -Wall
	
clean:
	rm -f *.o core

mrproper : clean
	rm -f projet_g1