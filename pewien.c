#include<ncurses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y1, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void pewien()
{
wy2b=0;
mvwprintw(pion2up, (y2u/2)+6, ((x2u - 21)/2), "%s", "Czy jestes pewien(a)?");
mvwprintw(pion2up, (y2u/2)+8, ((x2u/2)-8), "%s", "TAK");
highlight=1;
mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)-10), 7, A_NORMAL, 3, NULL);
mvwprintw(pion2up, (y2u/2)+8, ((x2u/2)+5), "%s", "NIE");
wrefresh(pion2up);
while(1)
	{	
	c = wgetch(stdscr);
		switch(c)
		{	
			case KEY_RIGHT:
				if(highlight == 1)
					{
					mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)-10), 7, A_NORMAL, 0, NULL);
					mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)+3), 7, A_NORMAL, 3, NULL);
					highlight = 2;
					wrefresh(pion2up);
					break;
					}
				if(highlight == 2)
					{
					mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)+3), 7, A_NORMAL, 0, NULL);
					mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)-10), 7, A_NORMAL, 3, NULL);
					highlight = 1;
					wrefresh(pion2up);
					break;
					}
			case KEY_LEFT:
				if(highlight == 1)
					{
					mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)-10), 7, A_NORMAL, 0, NULL);
					mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)+3), 7, A_NORMAL, 3, NULL);
					highlight = 2;
					wrefresh(pion2up);
					break;
					}
				if(highlight == 2)
					{
					mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)+3), 7, A_NORMAL, 0, NULL);
					mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)-10), 7, A_NORMAL, 3, NULL);
					highlight = 1;
					wrefresh(pion2up);
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
mvwchgat(pion2up, (y2u/2)+6, ((x2u - 21)/2), 21, A_INVIS, 0, NULL);
mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)-10), 7, A_INVIS, 0, NULL);
mvwchgat(pion2up, (y2u/2)+8, ((x2u/2)+3), 7, A_INVIS, 0, NULL);
wrefresh(pion2up);
if(wy2b==2)
	{
	interfejs();
	pewien();
	}
if(wy2b==1 && wyb < 5)
	{
	usleep(1500000);
	mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 5, NULL);
	wrefresh(pion2up);
	usleep(3200000);
	}
}
