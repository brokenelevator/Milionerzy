#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void zmiana_pytania();
void pol_na_pol();
void telefon_do_przyjaciela();
void pytanie_do_publicznosci();

void rozpozn_odp()
{
if(wyb<5)
	{
	if(wyb==prawidlodp)
		{
		mam=otgram;
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 5, NULL);
		mvwprintw(pion2up, (y2u/2)+5, ((x2u - 47)/2), "Poprawna odpowiedz. Wygrales(as) %d zlotych", mam);
		if(mam == 1000 || mam == 32000) mvwprintw(pion2up, (y2u/2)+6, ((x2u - 26)/2), "To jest suma gwarantowana");
		wrefresh(pion2up);
		switch(mam)
			{
			case 100: mvwchgat(pion1, 15*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 200: mvwchgat(pion1, 14*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 300: mvwchgat(pion1, 13*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 500: mvwchgat(pion1, 12*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 1000: mvwchgat(pion1, 11*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 2000: mvwchgat(pion1, 10*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 4000: mvwchgat(pion1, 9*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 8000: mvwchgat(pion1, 8*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 16000: mvwchgat(pion1, 7*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 32000: mvwchgat(pion1, 6*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 64000: mvwchgat(pion1, 5*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 125000: mvwchgat(pion1, 4*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 250000: mvwchgat(pion1, 3*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 500000: mvwchgat(pion1, 2*temp, 1, x1-2, A_NORMAL, 3, NULL); break;
			case 1000000:
			{
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
			wrefresh(pion1);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
			wrefresh(pion1);
			napms(250);
			mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
			mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
			wrefresh(pion1);
			napms(3000);
			break;
			}
			default: break;
			}
		wrefresh(pion1);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 5, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 5, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 5, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(5000);
		wyb=0;
		}
	else
		{
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
		mvwprintw(pion2up, (y2u/2)+5, ((x2u - 40)/2), "%s",  "Niestety to nie jest poprawna odpowiedz.");
		if(mam < 1000) mam = 0;
		if(mam < 32000 && mam > 1000) mam = 1000;
		if(mam > 32000) mam = 32000;
		mvwprintw(pion2up, (y2u/2)+6, ((x2u - 30)/2), "Twoja wygrana to %d zlotych", mam);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		gra=0;
		}
	}
if(wyb==5) pol_na_pol();
if(wyb==6) telefon_do_przyjaciela();
if(wyb==7) pytanie_do_publicznosci();
if(wyb==8) zmiana_pytania();
if(wyb==9)
	{
	mvwprintw(pion2up, (y2u/2)+5, ((x2u - 65)/2), "Gratuluje! Wypisuje czek na %d zlotych. To sa Twoje pieniadze.", mam);
	wrefresh(pion2up);
	napms(1000);	
	mvwprintw(pion2up, (y2u/2)+7, ((x2u - 49)/2), "%s", "Gdybys gral(a) dalej jaka odpowiedz bys wybral(a)?");
	wrefresh(pion2up);
	napms(1000);
	wyb=0;
	highlight=0;
	if(odpa==1) mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
	if(odpb==1) mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
	if(odpc==1) mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
	if(odpd==1) mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
	if(polnpol==1)
		{
		mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
		}
	if(teldp==1)
		{
		mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		}
	if(pytdpubl==1)
		{	
		mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		}
	if(zmpyt==1)
		{
		mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
		}
	mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 0, NULL);
	mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 0, NULL);	
	mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 0, NULL);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	if(odpa == 1 && highlight==0)
	{
	mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
	highlight=1;
	}
	if(odpb == 1 && highlight==0)
	{
	mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
	highlight=2;
	}
	if(odpc == 1 && highlight==0)
	{
	mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
	highlight=3;
	}
	if(odpd == 1 && highlight==0)
	{
	mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
	highlight=4;
	}
	while(1)
	{	
	if( (highlight==1 && odpa == 0) || (highlight==2 && odpb == 0) || (highlight==3 && odpc == 0) || (highlight==4 && odpd == 0) || (highlight==5 && polnpol == 0) ||  (highlight==6 && teldp == 0) || (highlight==7 && pytdpubl == 0) || (highlight==8 && zmpyt == 0) ) napms(1);
	else c = wgetch(pion2up);
		switch(c)
		{	
			case KEY_UP:
				if(highlight == 1)
					{
					if(odpd == 1) mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
					wrefresh(pion2up);
					wrefresh(pion2dol);
					if(odpd==0)
						{
						mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
						highlight = 3;
						wrefresh(pion2up);
						break;
						}
					mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 4;
					wrefresh(pion2up);
					break;
					}				
				if(highlight == 2)
					{
					if(odpb == 1) mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
					wrefresh(pion2up);
					wrefresh(pion2dol);
					if(odpa==0)
						{
						mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 3, NULL);
						mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 3, NULL);
						mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 3, NULL);
						highlight = 9;
						wrefresh(pion2dol);
						wrefresh(pion2up);
						break;
						}
					mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 1;
					wrefresh(pion2up);
					break;
					}
				if(highlight == 3)
					{
					if(odpc == 1) mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
					wrefresh(pion2up);
					wrefresh(pion2dol);
					if(odpb==0)
						{
						if(odpa==1) mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
						highlight = 1;
						wrefresh(pion2up);
						break;
						}
					mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 2;
					wrefresh(pion2up);
					break;
					}
				if(highlight == 4)
					{
					if(odpd == 1) mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
					wrefresh(pion2up);
					wrefresh(pion2dol);
					if(odpc==0)
						{
						if(odpb==1) mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
						highlight = 2;
						wrefresh(pion2up);
						break;
						}
					mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 3;
					wrefresh(pion2up);
					break;
					}
			case KEY_DOWN:
				if(highlight == 1)
					{
					if(odpa == 1) mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
					wrefresh(pion2up);
					wrefresh(pion2dol);
					if(odpb==0)
						{
						if(odpc==1) mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
						highlight=3;
						wrefresh(pion2up);
						break;
						}
					mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 2;
					wrefresh(pion2up);
					break;
					}
				if(highlight == 2)
					{
					if(odpb == 1) mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
					wrefresh(pion2up);
					wrefresh(pion2dol);
					if(odpc==0)
						{
						if(odpd==1) mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
						highlight=4;
						wrefresh(pion2up);
						break;
						}
					mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 3;
					wrefresh(pion2up);
					break;
					}
				if(highlight == 3)
					{
					if(odpc == 1) mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
					wrefresh(pion2up);
					wrefresh(pion2dol);
					if(odpd==0)
						{
						if(odpa==1) mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
						highlight=1;
						wrefresh(pion2up);
						break;
						}
					mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 4;
					wrefresh(pion2up);
					break;
					}
				if(highlight == 4)
					{
					if(odpd == 1) mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
					wrefresh(pion2up);
					wrefresh(pion2dol);
					if(odpa==0)
						{
						if(odpb==1) mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
						highlight=2;
						wrefresh(pion2up);
						break;
						}
					mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 1;
					wrefresh(pion2up);
					break;
					}
			case 10:
				wyb = highlight;
				break;
			default:	
				break;
		}
	if(wyb != 0) break;
	}
	if(wyb==prawidlodp)
		{
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 5, NULL);
		mvwprintw(pion2up, (y2u/2)+9, ((x2u - 49)/2), "To poprawna odpowiedz. Wygral(a)bys %d zlotych", otgram);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 5, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 5, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 5, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(wyb-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		}
		else
		{
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
		mvwprintw(pion2up, (y2u/2)-9, ((x2u - 31)/2), "%s",  "To nie jest poprawna odpowiedz.");
		mvwprintw(pion2up, (y2u/2)-7, ((x2u - 33)/2), "%s",  "Grunt to wiedziec kiedy odejsc ;)");
		mvwprintw(pion2up, (y2u/2)-6, ((x2u - 22)/2), "%s",  "Jeszcze raz gratuluje.");
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
		wrefresh(pion2up);
		napms(250);	
		mvwchgat(pion2up, (y2u/2)+(prawidlodp-1), ((x2u - 20)/2), 20, A_NORMAL, 4, NULL);
		}
		gra=0;		
		}
}

