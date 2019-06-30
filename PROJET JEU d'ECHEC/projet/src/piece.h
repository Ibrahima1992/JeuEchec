#ifndef _PIECE_H
#define _PIECE_H

/**
 *	Ce struct est pour la piece.
 *	Il y a 4 variables: sa couleur, son identifier, son cordonnes.
 */
struct piece_s{
	char couleur;
	char identifier;
	int x;
	int y;
};
typedef struct piece_s piece_t;

/**
 *	Cette fonction est pour initialiser un nouveau struct piece.
 */

piece_t piece_creer(char couleur,char identifier, int x, int y);

/**
 *	Cette fonction est pour renvoyger la couleur de la piece
 */
char piece_couleur(piece_t p);

/**
 *		Cette fonction est pour afficher le caractere qui lui associe
 */
void piece_afficher(piece_t p);

/*
 *		Cette fonction est pour renvoyger le caractere qui lui associe
 */

char piece_caractere(piece_t p);

/*
char piece_identifier(piece_t p);
 */
#endif
