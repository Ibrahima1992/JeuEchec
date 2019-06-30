#ifndef _TYPE_H
#define _TYPE_H

struct type_s{
	char roi;
	char dame;
	char fou;
	char cavalier;
	char tour;	
	char pion;
};

type_t creer_type(char roi,char dame,char fou,char cavalier,char tour,char pion);
int cmp_type(type_t t1, type_t t2);
void afficher_type(type_t t1);
void echange_type(type_t *t1, type_t *t2);


#endif
	
