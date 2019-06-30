#ifndef _LISTECOUPS_H
#define _LISTECOUPS_H
#include "piece.h"

typedef struct element2_s{
	int capture;
	int x;
	int y;
	struct element2_s * suivant;
}element2_t;

typedef struct listecoups_s{
	struct piece_s * premier;
	struct piece_s * dernier;
	int taille;
}listecoups_t;

listecoups_t * liste_initialiser();
element2_t * creer_element2(int x, int y);
void detruire_element2(element2_t * e);
int liste_vide(listecoups_t * l);
int liste_cardinal(listecoups_t * l);
element2_t * liste_extraire_debut(listecoups_t * l);
void liste_detruire(listecoups_t * l);
void liste_ajouter(listecoups_t * l, piece_t e);


#endif
