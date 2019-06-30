#include "listecoups.h"
#include <stdio.h>
#include <stdlib.h>

listecoups_t * liste_initialiser(){
	listecoups_t * res = malloc(sizeof(listecoups_t));
	res -> premier = NULL;
	res -> dernier = NULL;
	res -> taille = 0;
	return res;
}

element2_t * creer_element2(int x, int y){
	element2_t * res = malloc(sizeof(element2_t));
	res -> capture = 0;
	res -> x = x;
	res -> y = y;
	res -> suivant = NULL;
	return res;
}

void detruire_element2(element2_t * e){
	free(e);
}

int liste_vide(listecoups_t * l){
	if(l -> taille == 0)
		return 1;
	return 0;
}

int liste_cardinal(listecoups_t * l){
	return l -> taille;
}

/*
element2_t * liste_extraire_debut(listecoups_t * l){
	element2_t * res = l -> premier;
	if(!liste_vide(l)){
		l -> premier = res -> suivant;
		res -> suivant = NULL;
		l -> taille--;
		if(liste_vide(l))
			l -> dernier = NULL;
	}
	return res;
}
*/
/*
void liste_detruire(listecoups_t * l){
	while(!liste_vide(l)){
		detruire_element2(liste_extraire_debut(l));
	}
	free(l);
}
*/
/*
void liste_ajouter(listecoups_t * l, piece_t e){
	if(!liste_vide(l))
		l -> dernier -> suivant = e;
	else{
		l -> premier = e;
		l -> dernier = e;
		l -> taille++;
	}
}
*/



