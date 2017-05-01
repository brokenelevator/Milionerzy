#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void pytanie_do_publicznosci()
{
pytdpubl=0;
wclear(pion2dol);
wrefresh(pion2dol);
box(pion2dol, 0, 0);
wrefresh(pion2dol);
napms(1000);
mvwprintw(pion2dol, 2, ((x2d - 41)/2), "%s", "Szanowni Panstwo bardzo prosimy o pomoc.");
wrefresh(pion2dol);
napms(1500);
mvwprintw(pion2dol, 4, ((x2d - 34)/2), "%s", "Prosze o glosowanie w tej chwili.");
wrefresh(pion2dol);
napms(1500);
srand(time(NULL));
fra=0;
przyj=0;
publb=0;
publc=0;
publd=0;
gra=prawidlodp;
publa=(rand() % 100);
if(publa > 73 && publa < 96)
	{
		do{
		gra=(rand() % 4);	
		}while(gra==prawidlodp);
	}
publa=0;
if(odpa==1 && odpb==1 && odpc==1 && odpd==1)
{
	while(fra < 100)
	{
	publrand = (rand() % 100);
	if(gra==1)
		{
		if(publrand < 37) publa++;
		if(publrand > 36)
			{
			przyj=(rand() % 3);
			if(przyj==0) publb++;
			if(przyj==1) publc++;
			if(przyj==2) publd++;
			}
		}
	if(gra==2)
		{
		if(publrand < 37) publb++;
		if(publrand > 36)
			{
			przyj=(rand() % 3);
			if(przyj==0) publa++;
			if(przyj==1) publc++;
			if(przyj==2) publd++;
			}
		}
	if(gra==3)
		{
		if(publrand < 37) publc++;
		if(publrand > 36)
			{
			przyj=(rand() % 3);
			if(przyj==0) publa++;
			if(przyj==1) publb++;
			if(przyj==2) publd++;
			}
		}
	if(gra==4)
		{
		if(publrand < 37) publd++;
		if(publrand > 36)
			{
			przyj=(rand() % 3);
			if(przyj==0) publa++;
			if(przyj==1) publb++;
			if(przyj==2) publc++;
			}
		}
		fra++;
		}
}
if(odpa==0 || odpb==0 || odpc==0 || odpd==0)
{
	while(fra < 100)
	{
	publrand = (rand() % 100);
	if(gra==1)
		{
		if(publrand < 37) publa++;
		if(publrand > 36)
			{
			if(odpb==1) publb++;
			if(odpc==1) publc++;
			if(odpd==1) publd++;
			}
		}
	if(gra==2)
		{
		if(publrand < 37) publb++;
		if(publrand > 36)
			{
			if(odpa==1) publa++;
			if(odpc==1) publc++;
			if(odpd==1) publd++;
			}
		}
	if(gra==3)
		{
		if(publrand < 37) publc++;
		if(publrand > 36)
			{
			if(odpa==1) publa++;
			if(odpb==1) publb++;
			if(odpd==1) publd++;
			}
		}
	if(gra==4)
		{
		if(publrand < 37) publd++;
		if(publrand > 36)
			{
			if(odpa==1) publa++;
			if(odpb==1) publb++;
			if(odpc==1) publc++;
			}
		}
		fra++;
		}
}
gra=1;
napms(2500);
mvwprintw(pion2dol, 6, ((x2d - 32)/2), "A: %d    B: %d    C: %d    D: %d", publa, publb, publc, publd);
wrefresh(pion2dol);
napms(6000);
pion2dol_draw();
interfejs();
pewien();
rozpozn_odp();
}

