#include <stdlib.h>
#include <stdio.h>
#include "type.h"

type_t creer_type(char roi,char dame,char fou,char cavalier,char tour,char pion){
	type_t t;
	t.roi= roi;
	t.dame=dame;
	t.fou=fou;
	t.cavalier=cavalier;
	t.tour=tour;
	t.pion=pion;
	return t;
}

int cmp_type(type_t t1, type_t t2)
{
	if(t1.roi==t2.roi&&t1.dame==t2.dam&&t1.fou==t2.fou&&t1.cavalier==t2.cavalier)
		return 0;	
	if(t1.tour==t2.tour&&t1.pion==t2.pion)
		return 0;
	if(t1.roi<t2.roi)
		return -1;
	if(t1.dame<t2.dame)
		return -1;
	if(t1.fou<t2.fou)
		return -1;
	if(t1.cavalier<t2.cavalier)
		return -1;
	if(t1.tour<t2.tour)
		return -1;
	if(t1.pion<t2.p)
		return -1;
	return 1;
}

void afficher_type(type_t t1){
	printf("p %c\n",t.pion);
	printf("c %c\n",t.cavalier);
	printf("f %c\n",t.fou);
	printf("r %c\n",t.roi);
	printf("t %c\n",t.tour);
	printf("e %c\n",t.dame);
}
void echange_type(type_t *t1, type_t *t2){
	type_t tmp;
	tmp=*t1;
	*t1=*t2;
	*t2=tmp;
}

