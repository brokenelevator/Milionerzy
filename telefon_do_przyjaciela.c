#include<ncurses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y1, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void telefon_do_przyjaciela()
{
fra=0;
przyj=0;
teldp=0;
wclear(pion2dol);
wrefresh(pion2dol);
box(pion2dol, 0, 0);
wrefresh(pion2dol);
usleep(1000000);
mvwprintw(pion2dol, 1, ((x2d - 17)/2), "%s", "Do kogo dzwonimy?");
wrefresh(pion2dol);
usleep(1500000);
mvwprintw(pion2dol, 3, ((x2d - 5)/2), "%s", "Tomek");
highlight=1;
wrefresh(pion2dol);
usleep(1500000);
mvwprintw(pion2dol, 4, ((x2d - 4)/2), "%s", "Adam");
wrefresh(pion2dol);
usleep(1500000);
mvwprintw(pion2dol, 5, ((x2d - 5)/2), "%s", "Kasia");
wrefresh(pion2dol);
usleep(1500000);
mvwprintw(pion2dol, 9, ((x2d - 46)/2), "%s", "Adam - madry facet ale bywa zbyt pewny siebie");
mvwprintw(pion2dol, 8, ((x2d - 53)/2), "%s", "Tomek - geniusz ( a przynajmniej tak mu sie wydaje )");
mvwprintw(pion2dol, 7, ((x2d - 25)/2), "%s", "Kasia - madra dziewczyna");
mvwchgat(pion2dol, 3, ((x2d - 8)/2), 9, A_NORMAL, 3, NULL);
wrefresh(pion2dol);
wy2b=0;
while(1)
	{	
	c = wgetch(pion2dol);
		switch(c)
		{	
			case KEY_UP:
				if(highlight == 1)
					{
					mvwchgat(pion2dol, 3, ((x2d - 8)/2), 9, A_NORMAL, 0, NULL);
					wrefresh(pion2dol);
					mvwchgat(pion2dol, 5, ((x2d - 8)/2), 9, A_NORMAL, 3, NULL);
					highlight = 3;
					wrefresh(pion2dol);
					break;
					}				
				if(highlight == 2)
					{
					mvwchgat(pion2dol, 4, ((x2d - 8)/2), 9, A_NORMAL, 0, NULL);
					wrefresh(pion2dol);
					mvwchgat(pion2dol, 3, ((x2d - 8)/2), 9, A_NORMAL, 3, NULL);
					highlight = 1;
					wrefresh(pion2dol);
					break;
					}
				if(highlight == 3)
					{
					mvwchgat(pion2dol, 5, ((x2d - 8)/2), 9, A_NORMAL, 0, NULL);
					wrefresh(pion2dol);
					mvwchgat(pion2dol, 4, ((x2d - 8)/2), 9, A_NORMAL, 3, NULL);
					highlight = 2;
					wrefresh(pion2dol);
					break;
					}
			case KEY_DOWN:
				if(highlight == 1)
					{
					mvwchgat(pion2dol, 3, ((x2d - 8)/2), 9, A_NORMAL, 0, NULL);
					wrefresh(pion2dol);
					mvwchgat(pion2dol, 4, ((x2d - 8)/2), 9, A_NORMAL, 3, NULL);
					highlight = 2;
					wrefresh(pion2dol);
					break;
					}
				if(highlight == 2)
					{
					mvwchgat(pion2dol, 4, ((x2d - 8)/2), 9, A_NORMAL, 0, NULL);
					wrefresh(pion2dol);
					mvwchgat(pion2dol, 5, ((x2d - 8)/2), 9, A_NORMAL, 3, NULL);
					highlight = 3;
					wrefresh(pion2dol);
					break;
					}
				if(highlight == 3)
					{
					mvwchgat(pion2dol, 5, ((x2d - 8)/2), 9, A_NORMAL, 0, NULL);
					wrefresh(pion2dol);
					mvwchgat(pion2dol, 3, ((x2d - 8)/2), 9, A_NORMAL, 3, NULL);
					highlight = 1;
					wrefresh(pion2dol);
					break;
					}
			case 10:
				wy2b = highlight;
				break;
			default:	
				break;
		}
	if(wy2b != 0) break;
	}
usleep(1000000);
if(wy2b==1)
	{
	wclear(pion2dol);
	wrefresh(pion2dol);
	box(pion2dol, 0, 0);
	wrefresh(pion2dol);
	mvwprintw(pion2dol, (y2d/2), ((x2d - 20)/2), "%s", "Dzwonimy do Tomka   ");
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	wclear(pion2dol);
	wrefresh(pion2dol);
	box(pion2dol, 0, 0);
	wrefresh(pion2dol);
	mvwprintw(pion2dol, (y2d/2), ((x2d - 14)/2), "%s", "Tomek mysli   ");
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	wclear(pion2dol);
	wrefresh(pion2dol);
	box(pion2dol, 0, 0);
	wrefresh(pion2dol);
	srand(time(NULL));
	przyj=(rand() %100);
	if(przyj < 15) fra=prawidlodp;
	if(przyj > 14) fra=1000;
	if(fra==1 || fra==2 || fra==3 || fra ==4)
		{	
		mvwprintw(pion2dol, (y2d/2), ((x2d - 17)/2), "%s", "Jestem pewien ze ");
		if(fra==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "A");	
		if(fra==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "B");
		if(fra==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "C");
		if(fra==4) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "D");
		}	
	if(fra==1000)
		{
		do{
			przyj=(rand() % 4);	
		}while((przyj==0 && odpa==0) || (przyj==1 && odpb==0) || (przyj==2 && odpc==0) || (przyj==3 && odpd==0));
		mvwprintw(pion2dol, (y2d/2), ((x2d - 17)/2), "%s", "Jestem pewien ze ");
		if(przyj==0) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "A");	
		if(przyj==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "B");
		if(przyj==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "C");
		if(przyj==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "D");
		}	
	wrefresh(pion2dol);	
	}
if(wy2b==2)
	{
	wclear(pion2dol);
	wrefresh(pion2dol);
	box(pion2dol, 0, 0);
	wrefresh(pion2dol);
	mvwprintw(pion2dol, (y2d/2), ((x2d - 20)/2), "%s", "Dzwonimy do Adama   ");
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 20)/2)+17), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	wclear(pion2dol);
	wrefresh(pion2dol);
	box(pion2dol, 0, 0);
	wrefresh(pion2dol);
	mvwprintw(pion2dol, (y2d/2), ((x2d - 13)/2), "%s", "Adam mysli   ");
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 13)/2)+10), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	wclear(pion2dol);
	wrefresh(pion2dol);
	box(pion2dol, 0, 0);
	wrefresh(pion2dol);
	srand(time(NULL));
	przyj=(rand() %100);
	if(przyj < 45) fra=prawidlodp;
	if(przyj > 44 && przyj < 75) fra=1000;
	if(przyj > 74) fra=1001;
	przyj=(rand() % 3);
	if(fra==1 || fra==2 || fra==3 || fra ==4)
		{	
		if(przyj==0) 
			{		
			mvwprintw(pion2dol, (y2d/2), ((x2d - 9)/2), "%s", "Mysle ze ");
			if(fra==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "A");	
			if(fra==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "B");
			if(fra==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "C");
			if(fra==4) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "D");
			}
		if(przyj==1)
			{
			mvwprintw(pion2dol, (y2d/2), ((x2d - 17)/2), "%s", "Jestem pewien ze ");
			if(fra==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "A");	
			if(fra==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "B");
			if(fra==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "C");
			if(fra==4) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "D");
			}
		if(przyj==2) 
			{
			mvwprintw(pion2dol, (y2d/2), ((x2d - 17)/2), "%s", "Wydaje mi sie ze ");
			if(fra==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "A");	
			if(fra==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "B");
			if(fra==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "C");
			if(fra==4) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "D");
			}
		}	
	if(fra==1000)
		{
		if(przyj==0) 
			{	
			do{
				przyj=(rand() % 4);	
			}while((przyj==0 && odpa==0) || (przyj==1 && odpb==0) || (przyj==2 && odpc==0) || (przyj==3 && odpd==0));
			mvwprintw(pion2dol, (y2d/2), ((x2d - 9)/2), "%s", "Mysle ze ");
			if(przyj==0) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "A");	
			if(przyj==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "B");
			if(przyj==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "C");
			if(przyj==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "D");
			}
		if(przyj==1)
			{
			do{
				przyj=(rand() % 4);	
			}while((przyj==0 && odpa==0) || (przyj==1 && odpb==0) || (przyj==2 && odpc==0) || (przyj==3 && odpd==0));
			mvwprintw(pion2dol, (y2d/2), ((x2d - 17)/2), "%s", "Jestem pewien ze ");
			if(przyj==0) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "A");	
			if(przyj==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "B");
			if(przyj==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "C");
			if(przyj==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "D");
			}
		if(przyj==2) 
			{
			do{
				przyj=(rand() % 4);	
			}while((przyj==0 && odpa==0) || (przyj==1 && odpb==0) || (przyj==2 && odpc==0) || (przyj==3 && odpd==0));
			mvwprintw(pion2dol, (y2d/2), ((x2d - 17)/2), "%s", "Wydaje mi sie ze ");
			if(przyj==0) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "A");	
			if(przyj==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "B");
			if(przyj==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "C");
			if(przyj==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "D");
			}
		}
	if(fra==1001) mvwprintw(pion2dol, (y2d/2), ((x2d - 41)/2), "%s", "Wybacz, nic nie przychodzi mi do glowy...");	
	wrefresh(pion2dol);	
	}
if(wy2b==3)
	{
	wclear(pion2dol);
	wrefresh(pion2dol);
	box(pion2dol, 0, 0);
	wrefresh(pion2dol);
	mvwprintw(pion2dol, (y2d/2), ((x2d - 19)/2), "%s", "Dzwonimy do Kasi   ");
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 19)/2)+16), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	wclear(pion2dol);
	wrefresh(pion2dol);
	box(pion2dol, 0, 0);
	wrefresh(pion2dol);
	mvwprintw(pion2dol, (y2d/2), ((x2d - 14)/2), "%s", "Kasia mysli   ");
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "   ");	
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".  ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", ".. ");
	wrefresh(pion2dol);
	usleep(500000);
	mvwprintw(pion2dol, (y2d/2), (((x2d - 14)/2)+11), "%s", "...");
	wrefresh(pion2dol);
	usleep(500000);
	wclear(pion2dol);
	wrefresh(pion2dol);
	box(pion2dol, 0, 0);
	wrefresh(pion2dol);
	srand(time(NULL));
	przyj=(rand() %100);
	if(przyj < 80) fra=prawidlodp;
	if(przyj>79 && przyj < 90) fra=1000;
	if(przyj > 89) fra=1001;
	przyj=(rand() % 3);
	if(fra==1 || fra==2 || fra==3 || fra ==4)
		{	
		if(przyj==0) 
			{		
			mvwprintw(pion2dol, (y2d/2), ((x2d - 9)/2), "%s", "Mysle ze ");
			if(fra==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "A ;)");	
			if(fra==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "B ;)");
			if(fra==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "C ;)");
			if(fra==4) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "D ;)");
			}
		if(przyj==1)
			{
			mvwprintw(pion2dol, (y2d/2), ((x2d - 16)/2), "%s", "Jestem pewna ze ");
			if(fra==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 16)/2)+16), "%s", "A ;)");	
			if(fra==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 16)/2)+16), "%s", "B ;)");
			if(fra==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 16)/2)+16), "%s", "C ;)");
			if(fra==4) mvwprintw(pion2dol, (y2d/2), (((x2d - 16)/2)+16), "%s", "D ;)");
			}
		if(przyj==2) 
			{
			mvwprintw(pion2dol, (y2d/2), ((x2d - 17)/2), "%s", "Wydaje mi sie ze ");
			if(fra==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "A ;)");	
			if(fra==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "B ;)");
			if(fra==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "C ;)");
			if(fra==4) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "D ;)");
			}
		}	
	if(fra==1000)
		{
		if(przyj==0) 
			{	
			do{
				przyj=(rand() % 4);	
			}while((przyj==0 && odpa==0) || (przyj==1 && odpb==0) || (przyj==2 && odpc==0) || (przyj==3 && odpd==0));
			mvwprintw(pion2dol, (y2d/2), ((x2d - 9)/2), "%s", "Mysle ze ");
			if(przyj==0) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "A ;)");	
			if(przyj==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "B ;)");
			if(przyj==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "C ;)");
			if(przyj==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 9)/2)+9), "%s", "D ;)");
			}
		if(przyj==1)
			{
			do{
				przyj=(rand() % 4);	
			}while((przyj==0 && odpa==0) || (przyj==1 && odpb==0) || (przyj==2 && odpc==0) || (przyj==3 && odpd==0));
			mvwprintw(pion2dol, (y2d/2), ((x2d - 16)/2), "%s", "Jestem pewna ze ");
			if(przyj==0) mvwprintw(pion2dol, (y2d/2), (((x2d - 16)/2)+16), "%s", "A ;)");	
			if(przyj==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 16)/2)+16), "%s", "B ;)");
			if(przyj==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 16)/2)+16), "%s", "C ;)");
			if(przyj==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 16)/2)+16), "%s", "D ;)");
			}
		if(przyj==2) 
			{
			do{
				przyj=(rand() % 4);	
			}while((przyj==0 && odpa==0) || (przyj==1 && odpb==0) || (przyj==2 && odpc==0) || (przyj==3 && odpd==0));
			mvwprintw(pion2dol, (y2d/2), ((x2d - 17)/2), "%s", "Wydaje mi sie ze ");
			if(przyj==0) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "A ;)");	
			if(przyj==1) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "B ;)");
			if(przyj==2) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "C ;)");
			if(przyj==3) mvwprintw(pion2dol, (y2d/2), (((x2d - 17)/2)+17), "%s", "D ;)");
			}
		}
	if(fra==1001) mvwprintw(pion2dol, (y2d/2), ((x2d - 41)/2), "%s", "Wybacz, nic nie przychodzi mi do glowy...");	
	wrefresh(pion2dol);	
	}
usleep(2500000);
wy2b=0;
pion2dol_draw();
interfejs();
pewien();
rozpozn_odp();
}

