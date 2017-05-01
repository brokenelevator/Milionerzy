#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void pol_na_pol()
{
srand(time(NULL));
polnpol=0;
wclear(pion2dol);
wrefresh(pion2dol);
box(pion2dol, 0, 0);
wrefresh(pion2dol);
napms(1000);
mvwprintw(pion2dol, 2, ((x2d - 25)/2), "%s", "Poprosze zatem komputer.");
wrefresh(pion2dol);
napms(1500);
mvwprintw(pion2dol, 4, ((x2d - 40)/2), "%s", "O odrzucenie dwoch blednych odpowiedzi.");
wrefresh(pion2dol);
napms(1500);
mvwprintw(pion2dol, 6, ((x2d - 53)/2), "%s", "I o pozostawienie jednej poprawnej i jednej blednej.");
wrefresh(pion2dol);
napms(3000);
pion2dol_draw();
polnpol=(rand() % 3);
if(prawidlodp==1)
	{
	if(polnpol==0)
		{
		odpc=0;
		odpd=0;
		mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	if(polnpol==1)
		{
		odpb=0;
		odpd=0;
		mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	if(polnpol==2)
		{
		odpb=0;
		odpc=0;
		mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	}
if(prawidlodp==2)
	{
	if(polnpol==0)
		{
		odpc=0;
		odpd=0;
		mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	if(polnpol==1)
		{
		odpa=0;
		odpd=0;
		mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	if(polnpol==2)
		{
		odpa=0;
		odpc=0;
		mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	}
if(prawidlodp==3)
	{
	if(polnpol==0)
		{
		odpb=0;
		odpd=0;
		mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	if(polnpol==1)
		{
		odpa=0;
		odpd=0;
		mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	if(polnpol==2)
		{
		odpa=0;
		odpb=0;
		mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	}
if(prawidlodp==4)
	{
	if(polnpol==0)
		{
		odpb=0;
		odpc=0;
		mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	if(polnpol==1)
		{
		odpa=0;
		odpc=0;
		mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	if(polnpol==2)
		{
		odpa=0;
		odpb=0;
		mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_INVIS, 6, NULL);		
		}
	}
wrefresh(pion2up);
polnpol=0;
interfejs();
pewien();
rozpozn_odp();
}
