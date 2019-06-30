#ifndef _LISTECAPTUREES_H
#define _LISTECAPTUREES_H
#include "piece.h"
#include "listecoups.h"

typedef struct element_s{
	piece_t p;
	struct element_s * suivant;
}element_t;

typedef struct listecapturees_s{
	struct element_s * premier;
	struct element_s * dernier;
	int taille;
}listecapturees_t;

listecapturees_t * liste2_initialiser();


#endif
