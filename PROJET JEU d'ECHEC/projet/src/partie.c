#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "partie.h"

char ** creer_tableau ()
{
	int i, j;
	char ** tab = malloc(sizeof(char*)*8);
	for (i=0; i<8; i++){
		tab[i]= malloc(sizeof(char)*8);
		for (j=0; j<8; j++)
				tab[i][j] = '.';
	}
	
	
	return tab;	
}

partie_t * partie_initialiser(){
	partie_t * res = malloc(sizeof(partie_t));
	res -> tab = creer_tableau();
	res -> listecoups = NULL;
	res -> listecapturees = NULL;
	res -> coups = 1;
	return res;
}

void detruire_tableau(char ** tab)
{
	int i;
	for (i=0; i < 8; i++)
		free (tab [i]);
	free (tab);
}

void afficher_echiquier (char ** p)
{
	  int i,j;
    char t = ' ';
    printf("\t \t------------JEU D'ECHEC---------  \n");
    printf(" \n");
    printf("\t   ");
    for(i=0; i<8; i++){
        if(i+1<=9)
        	printf("  %d  ",i);
        if(i+1>9)
        	printf("  %d ",i);
    }
    printf("\n\n");
    for(i=0; i<8;i++){
        if(i+1<=9)
        	printf("\t%d  ",i);
        if(i+1>9)
        	printf("\t%d ",i);
        	for(j=0;j<8;j++){
        		t=p[i][j];
       			printf("  ");
        		printf("%c",t);
        		printf("  ");
       		 }
        printf("\n");
        printf("\n");
    }
}


int case_vide(partie_t * p, int x, int y){
	if(p->tab[x][y] == '.')
		return 1;
	return 0;
}

void deplacement(partie_t * partie, int a, int b, int x, int y){	
	partie->tab[x][y] = partie->tab[a][b];
	partie->tab[a][b] = '.';
	
	
	/*p -> listecoups -> */
}

void changer_joueur(partie_t * p){
	if(p -> coups == 0)	
		p -> coups = 1;
	else
		p -> coups = 0;
}

void partie_detruire(partie_t * p){
	detruire_tableau(p -> tab);
	free(p);
}

/* void modifier_case(partie_t * p, piece */




