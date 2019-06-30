#include "listecapturees.h"
#include <stdio.h>
#include <stdlib.h>

listecapturees_t * liste2_initialiser(){
	listecapturees_t * res = malloc(sizeof(listecapturees_t));
	res -> premier = NULL;
	res -> dernier = NULL;
	res -> taille = 0;
	return res;
}

