#ifndef _ECHIQUIER_H
#define _ECHIQUIER_H
#include "listecoups.h"
#include "listecapturees.h"

/**
 *	Ce struct est pour la partie.
 *	Il y a 4 variables: un tableau tab, une liste listecoups , une liste listecapturees .
 */
typedef struct partie_s{
	char ** tab;
	struct listecoups_s * listecoups;
	struct listecapturees_s * listecapturees;
	int coups;
}partie_t;

/**
 *	Cette fonction est pour initialiser un nouveau struct partie.
 */
partie_t * partie_initialiser();

/**
 *	Cette fonction est pour changer la place du piece.
 */
void deplacement(partie_t * partie, int a, int b, int x, int y);

/**
 *	Cette fonction est pour creer un plateau qui contient les pieces.
 */
char ** creer_tableau ();

/**
 *	Cette fonction est pour librer la memoire du tableau.
 */
void detruire_tableau(char ** tab);

/**
 *	Cette fonction est pour afficher le plateau qui a cree dans la fonction creer_tableau.
 */
void afficher_echiquier (char ** p);

/**
 *	Cette fonction est pour changer le tour de jouer.
 */
void changer_joueur(partie_t * p);
#endif
