FILES=listecoups.o piece.o main.o partie.o
CC=gcc
CFLAGS=-g -Wall -ansi -pedantic -O3

all:$(FILES)
	$(CC) $(CFLAGS) $(FILES)
listecoups.o:listecoups.c
	$(CC) -c $(CFLAGS) listecoups.c
piece.o:piece.c
	$(CC) -c $(CFLAGS) piece.c
partie.o:partie.c 
	$(CC) -c $(CFLAGS) partie.c	
main.o:main.c 
	$(CC) -c $(CFLAGS) main.c
