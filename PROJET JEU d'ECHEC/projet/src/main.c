#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "partie.c"
#include "piece.c"
#include "listecoups.c"


int main(int argc, char ** argv){
	partie_t * partie = partie_initialiser();
	
	
		
		
	
	char n = 'n';
	char T = 'T';
	char C = 'C';
	char F = 'F';
	char R = 'R';
	char E = 'E';
	char P = 'P';
	
	char b = 'b';
	char t = 't';
	char c = 'c';
	char f = 'f';
	char r = 'r';
	char e = 'e';
	char p = 'p';
	
	piece_t Tour = piece_creer(b,T,0,0);
	piece_t Cavalier = piece_creer(b,C,0,1);
	piece_t Fou = piece_creer(b,F,0,2);
	piece_t Roi = piece_creer(b,R,0,3);
	piece_t Reine = piece_creer(b,E,0,4);
	piece_t Fou2 = piece_creer(b,F,0,5);
	piece_t Cavalier2 = piece_creer(b,C,0,6);
	piece_t Tour2 = piece_creer(b,T,0,7);
	
	piece_t tour = piece_creer(n,t,7,0);
	piece_t	cavalier = piece_creer(n,c,7,1);
	piece_t	fou = piece_creer(n,f,7,2);
	piece_t	roi = piece_creer(n,r,7,3);
	piece_t	reine = piece_creer(n,e,7,4);
	piece_t	fou2 = piece_creer(n,f,7,5);
	piece_t	cavalier2 = piece_creer(n,c,7,6);
	piece_t	tour2 = piece_creer(n,t,7,7);
	
	piece_t	Pion1 = piece_creer(b,P,1,0);	
	piece_t Pion2 = piece_creer(b,P,1,1);
	piece_t Pion3 = piece_creer(b,P,1,2);
	piece_t Pion4 = piece_creer(b,P,1,3);
	piece_t Pion5 = piece_creer(b,P,1,4);
	piece_t Pion6 = piece_creer(b,P,1,5);
	piece_t Pion7 = piece_creer(b,P,1,6);
	piece_t Pion8 = piece_creer(b,P,1,7);
	
	piece_t pion1 = piece_creer(n,p,6,0);
	piece_t pion2 =	piece_creer(n,p,6,1);
	piece_t pion3 =	piece_creer(n,p,6,2);
	piece_t pion4 =	piece_creer(n,p,6,3);
	piece_t pion5 =	piece_creer(n,p,6,4);
	piece_t pion6 =	piece_creer(n,p,6,5);
	piece_t pion7 =	piece_creer(n,p,6,6);
	piece_t pion8 =	piece_creer(n,p,6,7);

	
	
	partie->tab[Tour.x][Tour.y] = Tour.identifier;
	partie->tab[Cavalier.x][Cavalier.y] = Cavalier.identifier;
	partie->tab[Fou.x][Fou.y] = Fou.identifier;
	partie->tab[Roi.x][Roi.y] = Roi.identifier;
	partie->tab[Reine.x][Reine.y] = Reine.identifier;
	partie->tab[Fou2.x][Fou2.y] = Fou2.identifier;
	partie->tab[Cavalier2.x][Cavalier2.y] = Cavalier2.identifier;
	partie->tab[Tour2.x][Tour2.y] = Tour2.identifier;
	
	
	partie->tab[tour.x][tour.y] = tour.identifier;
	partie->tab[cavalier.x][cavalier.y] = cavalier.identifier;
	partie->tab[fou.x][fou.y] = fou.identifier;
	partie->tab[roi.x][roi.y] = roi.identifier;
	partie->tab[reine.x][reine.y] = reine.identifier;
	partie->tab[fou2.x][fou2.y] = fou2.identifier;
	partie->tab[cavalier2.x][cavalier2.y] = cavalier2.identifier;
	partie->tab[tour2.x][tour2.y] = tour2.identifier;

	partie->tab[Pion1.x][Pion1.y] = Pion1.identifier;
	partie->tab[Pion2.x][Pion2.y] = Pion2.identifier;
	partie->tab[Pion3.x][Pion3.y] = Pion3.identifier;
	partie->tab[Pion4.x][Pion4.y] = Pion4.identifier;
	partie->tab[Pion5.x][Pion5.y] = Pion5.identifier;
	partie->tab[Pion6.x][Pion6.y] = Pion6.identifier;
	partie->tab[Pion7.x][Pion7.y] = Pion7.identifier;
	partie->tab[Pion8.x][Pion8.y] = Pion8.identifier;
	
	partie->tab[pion1.x][pion1.y] = pion1.identifier;
	partie->tab[pion2.x][pion2.y] = pion2.identifier;
	partie->tab[pion3.x][pion3.y] = pion3.identifier;
	partie->tab[pion4.x][pion4.y] = pion4.identifier;
	partie->tab[pion5.x][pion5.y] = pion5.identifier;
	partie->tab[pion6.x][pion6.y] = pion6.identifier;
	partie->tab[pion7.x][pion7.y] = pion7.identifier;
	partie->tab[pion8.x][pion8.y] = pion8.identifier;
	
	
	
	
	int jeu = 1;
	
	
	while(jeu = 1){
		afficher_echiquier(partie->tab);	
		
		int a1,a2,a3,a4;
		
		if(partie->coups == 1)
			printf("C'est le coup de jouer NOIR \n");
		else
			printf("C'est le coup de jouer BLANC \n");
		changer_joueur(partie);
		
		printf("Entrez le coup jouer: ");
		scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
		
		
		deplacement(partie,a1,a2,a3,a4);	
	}
	
	return 0;
}
