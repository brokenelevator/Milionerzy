#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void interfejs()
{
if(wyb < 5) highlight=wyb;
else highlight=0;
wyb=0;
wy2b=-1;
if(highlight==0)
	{
	if(odpa == 1)
		{
		mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
		highlight=1;
		}
	else if(odpb == 1)
		{
		mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
		highlight=2;
		}
	else if(odpc == 1)
		{
		mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
		highlight=3;
		}
	else if(odpd == 1)
		{
		mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
		highlight=4;
		}
	}
while(1)
	{
	if(!( (highlight==1 && odpa == 0) || (highlight==2 && odpb == 0) || (highlight==3 && odpc == 0) || (highlight==4 && odpd == 0) || (highlight==5 && polnpol == 0) || (highlight==6 && teldp == 0) || (highlight==7 && pytdpubl == 0) || (highlight==8 && zmpyt == 0) ) ) c = wgetch(pion2up);
	switch(c)
		{	
		case KEY_UP:
			if(highlight == 1)
				{
				if(odpa == 1) mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);
				mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 3, NULL);
				highlight = 9;
				wrefresh(pion2dol);
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
			if(highlight == 5 || highlight == 6 || highlight == 7 || highlight == 8)
				{
				if(zmpyt == 1){
				mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(pytdpubl == 1){
				mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(teldp == 1){
				mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(polnpol == 1){
				mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(odpd==0)
					{
					if(odpc==1) mvwchgat(pion2up, (y2u/2)+2, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 3;
					wrefresh(pion2up);
					break;
					}
				mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
				wy2b=highlight;
				highlight = 4;
				wrefresh(pion2up);
				wrefresh(pion2dol);
				break;
				}
			if(highlight == 9)
				{
				mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);
				if(wy2b == -1) wy2b=7;
				if(wy2b == 8 && zmpyt==0) wy2b=7;
				if(wy2b == 7 && pytdpubl==0) wy2b=6;
				if(wy2b == 6 && teldp==0) wy2b=5;
				if(wy2b == 5)
					{
					if(polnpol==1){
					mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					else wy2b=6;
					highlight = 5;
					}
				if(wy2b == 6)
					{
					if(teldp==1){
					mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					else wy2b=7;
					highlight = 6;
					}
				if(wy2b == 7)
					{
					if(pytdpubl==1){
					mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					else wy2b=8;
					highlight = 7;
					}
				if(wy2b == 8)
					{
					if(zmpyt==1){
					mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					highlight = 8;
					}
				wrefresh(pion2dol);
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
				if(odpd==1)	mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
				highlight = 4;
				wrefresh(pion2up);
				break;
				}
			if(highlight == 4)
				{
				if(odpd == 1) mvwchgat(pion2up, (y2u/2)+3, ((x2u - 20)/2), 20, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);
				if(wy2b == -1) wy2b=6;
				if(wy2b == 8 && zmpyt==0) wy2b=7;
				if(wy2b == 7 && pytdpubl==0) wy2b=6;
				if(wy2b == 6 && teldp==0) wy2b=5;
				if(wy2b == 5)
					{
					if(polnpol==1){
					mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					else wy2b=6;
					highlight = 5;
					}
				if(wy2b == 6)
					{
					if(teldp==1){
					mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					else wy2b=7;
					highlight = 6;
					}
				if(wy2b == 7)
					{
					if(pytdpubl==1){
					mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					else wy2b=8;
					highlight = 7;
					}
				if(wy2b == 8)
					{
					if(zmpyt==1){
					mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					highlight = 8;
					}
				wrefresh(pion2up);
				wrefresh(pion2dol);
				break;
				}
			if(highlight == 5 || highlight == 6 || highlight == 7 || highlight == 8)
				{
				if(zmpyt == 1){
				mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(pytdpubl == 1){
				mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(teldp == 1){
				mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(polnpol == 1){
				mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 3, NULL);
				wy2b=highlight;
				highlight = 9;
				wrefresh(pion2dol);
				break;
				}
			if(highlight == 9)
				{
				mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);
				if(odpa==0)
					{
					if(odpb==1) mvwchgat(pion2up, (y2u/2)+1, ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
					highlight = 2;
					wrefresh(pion2up);
					wrefresh(pion2dol);
					break;
					}
				mvwchgat(pion2up, (y2u/2), ((x2u - 20)/2), 20, A_NORMAL, 3, NULL);
				highlight = 1;
				wrefresh(pion2up);
				wrefresh(pion2dol);
				break;
				}
		case KEY_LEFT:
			if(highlight == 1 || highlight== 2 || highlight== 3 || highlight== 4 || highlight== 9)
				{
				break;
				}
			if(highlight == 5)
				{
				if(polnpol == 1){
				mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(zmpyt==1){ 
				mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
				highlight = 8;
				wrefresh(pion2dol);
				break;
				}
			if(highlight == 6)
				{
				if(teldp == 1){
				mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(polnpol==0)
					{
					if(zmpyt==1){ 
					mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					highlight = 8;
					wrefresh(pion2dol);
					break;
					}
				mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				highlight = 5;
				wrefresh(pion2dol);
				break;
				}
			if(highlight == 7)
				{
				if(pytdpubl == 1){
				mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(teldp==0)
					{
					if(polnpol==1){
					mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					highlight = 5;
					wrefresh(pion2dol);
					break;
					}
				mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				highlight = 6;
				wrefresh(pion2dol);
				break;
				}
			if(highlight == 8)
				{
				if(zmpyt == 1){
				mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(pytdpubl==0)
					{
					if(teldp==1) {
					mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					highlight = 6;
					wrefresh(pion2dol);
					break;
					}
				mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				highlight = 7;
				wrefresh(pion2dol);
				break;
				}
		case KEY_RIGHT:
			if(highlight == 1 || highlight== 2 || highlight== 3 || highlight== 4 || highlight== 9)
				{
				break;
				}
			if(highlight == 5)
				{
				if(polnpol == 1){
				mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(teldp==0)
				{
					if(pytdpubl==1) {
					mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					highlight = 7;
					wrefresh(pion2dol);
					break;
				}
				mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				highlight = 6;
				wrefresh(pion2dol);
				break;
				}
			if(highlight == 6)
				{
				if(teldp == 1){
				mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(pytdpubl==0)
					{
					if(zmpyt==1){ 
					mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					highlight = 8;
					wrefresh(pion2dol);
					break;
					}
				mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				highlight = 7;
				wrefresh(pion2dol);
				break;
				}
			if(highlight == 7)
				{
				if(pytdpubl == 1){
				mvwchgat(pion2dol, 1, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, (x2d/2)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}
				if(zmpyt==0)
					{
					if(polnpol==1){
					mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					highlight = 5;
					wrefresh(pion2dol);
					break;
					}
				mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
				highlight = 8;
				wrefresh(pion2dol);
				break;
				}
			if(highlight == 8)
				{
				if(zmpyt == 1){
				mvwchgat(pion2dol, 1, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 2, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 3, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 4, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				mvwchgat(pion2dol, 5, ((3*x2d)/4)+1, (x2d/4)-1, A_NORMAL, 0, NULL);
				wrefresh(pion2up);
				wrefresh(pion2dol);}					
				if(polnpol==0)
					{
					if(teldp==1) {
					mvwchgat(pion2dol, 1, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 2, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 3, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 4, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);
					mvwchgat(pion2dol, 5, (x2d/4)+1, (x2d/4)-1, A_NORMAL, 3, NULL);}
					highlight = 6;
					wrefresh(pion2dol);
					break;
					}
				mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
				highlight = 5;
				wrefresh(pion2dol);
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
}
