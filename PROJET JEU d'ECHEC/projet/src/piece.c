#include <stdio.h>
#include <stdlib.h>
#include "piece.h"

piece_t piece_creer(char couleur,char identifier, int x, int y){
	piece_t res;
	res.couleur = couleur;
	res.identifier = identifier;
	res.x = x;
	res.y = y;
	return res;
}

/*
piece_t piece_identifier(char i){
	
}*/

char piece_caractere(piece_t p){
	return p.identifier;
}

char piece_couleur(piece_t p){
	return p.couleur;
}

void piece_afficher(piece_t p){
	printf("Couleur de la piece est: %d \n", p.couleur);
}


