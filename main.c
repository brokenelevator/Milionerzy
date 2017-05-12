#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"includeset.c"

int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand, intro;
float x1, x2u, x2d, y11, y2u, y2d, temp;
char imie[50];
WINDOW *pion1, *pion2up, *pion2dol;

int main()
{
initscr();
getmaxyx(stdscr, y, x);
if(y < 32 || x < 100)
	{
	resizeterm(32, 100);
	getmaxyx(stdscr, y, x);
	}
raw();
noecho();
keypad(stdscr, TRUE);
curs_set(0);
mvwprintw(stdscr, ((y - 18)/2)-4, ((x - 73)/2), "%s", "                   $");
mvwprintw(stdscr, ((y - 18)/2)-3, ((x - 73)/2), "%s", " $$       $$   $   $   $");
mvwprintw(stdscr, ((y - 18)/2)-2, ((x - 73)/2), "%s", " $$$      $$   $   $   $");
mvwprintw(stdscr, ((y - 18)/2)-1, ((x - 73)/2), "%s", " $$$     $$$       $");
mvwprintw(stdscr, ((y - 18)/2), ((x - 73)/2), "%s", " $ $     $ $       $         $$               $$");
mvwprintw(stdscr, ((y - 18)/2)+1, ((x - 73)/2), "%s", " $ $$    $ $   $   $   $   $$$$$   $$$$$$   $$$$$   $$$$ $$$$$ $$   $$");
mvwprintw(stdscr, ((y - 18)/2)+2, ((x - 73)/2), "%s", " $  $   $$ $   $   $   $   $   $$  $$  $$   $   $   $$      $$  $   $$");
mvwprintw(stdscr, ((y - 18)/2)+3, ((x - 73)/2), "%s", " $  $   $  $   $   $   $  $$   $$  $    $  $$   $$  $       $   $   $");
mvwprintw(stdscr, ((y - 18)/2)+4, ((x - 73)/2), "%s", " $  $$  $  $   $   $   $  $     $  $    $  $$   $$  $      $$   $$  $ ");
mvwprintw(stdscr, ((y - 18)/2)+5, ((x - 73)/2), "%s", " $   $  $  $   $   $   $  $     $  $    $  $$$$$$$  $      $    $$ $$");
mvwprintw(stdscr, ((y - 18)/2)+6, ((x - 73)/2), "%s", " $   $ $$  $   $   $   $  $     $  $    $  $$       $     $$     $ $$");
mvwprintw(stdscr, ((y - 18)/2)+7, ((x - 73)/2), "%s", " $   $$$   $   $   $   $  $     $  $    $  $$       $     $      $ $");
mvwprintw(stdscr, ((y - 18)/2)+8, ((x - 73)/2), "%s", " $   $$$   $   $   $   $  $$   $$  $    $   $       $    $$      $$$");
mvwprintw(stdscr, ((y - 18)/2)+9, ((x - 73)/2), "%s", " $    $$   $   $   $   $   $$$$$   $    $   $$$$$$  $    $$$$$    $$");
mvwprintw(stdscr, ((y - 18)/2)+10, ((x - 73)/2), "%s", " $    $    $   $   $   $    $$$    $    $    $$$$   $    $$$$$    $");
mvwprintw(stdscr, ((y - 18)/2)+11, ((x - 73)/2), "%s", "                                                                  $");
mvwprintw(stdscr, ((y - 18)/2)+12, ((x - 73)/2), "%s", "                                                                 $$");
mvwprintw(stdscr, ((y - 18)/2)+13, ((x - 73)/2), "%s", "by Aleksander Lorenc                                             $$   2.0"); 
attron(A_REVERSE);
mvwprintw(stdscr, (((y - 18)/2)+16),((x - 30)/2), "%s", "        Rozpocznij gre        ");
intro=1;
highlight=1;
attroff(A_REVERSE);
mvwprintw(stdscr, (((y - 18)/2)+17),((x - 30)/2), "%s", " Rozpocznij gre (pomin wstep) ");
mvwprintw(stdscr, (((y - 18)/2)+18),((x - 7)/2), "%s", "Zakoncz");
refresh();
while(1)
	{	
	c = wgetch(stdscr);
		switch(c)
		{	
			case KEY_UP:
				if(highlight == 1)
					{
					mvwchgat(stdscr, (((y - 18)/2)+16), ((x - 30)/2), 30, A_NORMAL, 0, NULL);
					mvwchgat(stdscr, (((y - 18)/2)+18), ((x - 30)/2), 30, A_REVERSE, 0, NULL);
					highlight = 3;
					refresh();
					break;
					}
				if(highlight == 2)
					{
					mvwchgat(stdscr, (((y - 18)/2)+17), ((x - 30)/2), 30, A_NORMAL, 0, NULL);
					mvwchgat(stdscr, (((y - 18)/2)+16), ((x - 30)/2), 30, A_REVERSE, 0, NULL);
					highlight = 1;
					refresh();
					break;
					}
			if(highlight == 3)
					{
					mvwchgat(stdscr, (((y - 18)/2)+18), ((x - 30)/2), 30, A_NORMAL, 0, NULL);
					mvwchgat(stdscr, (((y - 18)/2)+17), ((x - 30)/2), 30, A_REVERSE, 0, NULL);
					highlight = 2;
					refresh();
					break;
					}
			case KEY_DOWN:
				if(highlight == 1)
					{
					mvwchgat(stdscr, (((y - 18)/2)+16), ((x - 30)/2), 30, A_NORMAL, 0, NULL);
					mvwchgat(stdscr, (((y - 18)/2)+17), ((x - 30)/2), 30, A_REVERSE, 0, NULL);
					highlight = 2;
					refresh();
					break;
					}
				if(highlight == 2)
					{
					mvwchgat(stdscr, (((y - 18)/2)+17), ((x - 30)/2), 30, A_NORMAL, 0, NULL);
					mvwchgat(stdscr, (((y - 18)/2)+18), ((x - 30)/2), 30, A_REVERSE, 0, NULL);
					highlight = 3;
					refresh();
					break;
					}
			if(highlight == 3)
					{
					mvwchgat(stdscr, (((y - 18)/2)+18), ((x - 30)/2), 30, A_NORMAL, 0, NULL);
					mvwchgat(stdscr, (((y - 18)/2)+16), ((x - 30)/2), 30, A_REVERSE, 0, NULL);
					highlight = 1;
					refresh();
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
if(highlight == 2) intro = 0;
if(highlight == 3)
	{
	clear();
	mvwprintw(stdscr, (y/2), ((x - 14)/2), "%s", "Do zobaczenia!");
	refresh();
	getch();
	endwin();
	return 0;
	} 
clear();
echo();
mvwprintw(stdscr, (y/2), ((x - 18)/2), "%s", "Jak masz na imie?");
attron(A_REVERSE);
mvwprintw(stdscr, ((y/2)+1), ((x - 18)/2), "%s", "                  ");
mvwscanw(stdscr, ((y/2)+1), ((x - 18)/2), "%s", imie);
attroff(A_REVERSE);
refresh();
noecho();
clear();
refresh();
pion1 = newwin(y, (x/4), 0, 0);
pion2up = newwin((2*y/3), (3*x/4), 0, (x/4));
pion2dol = newwin((y/3)+1, (3*x/4), (2*y/3), (x/4));
box(pion1, 0, 0);
box(pion2up, 0, 0);
box(pion2dol, 0, 0);
wrefresh(pion1);
wrefresh(pion2up);
wrefresh(pion2dol);
keypad(pion1, TRUE);
keypad(pion2up, TRUE);
keypad(pion2dol, TRUE);
getmaxyx(pion1, y11, x1);
getmaxyx(pion2up, y2u, x2u);
getmaxyx(pion2dol, y2d, x2d);
start_color();
init_pair(1, COLOR_CYAN, COLOR_BLACK);
init_pair(2, COLOR_GREEN, COLOR_BLACK);
init_pair(3, COLOR_BLACK, COLOR_CYAN);
init_pair(4, COLOR_BLACK, COLOR_GREEN);
init_pair(5, COLOR_BLACK, COLOR_YELLOW);
init_pair(6, COLOR_BLACK, COLOR_BLACK);

temp=y11/16;
mvwhline(pion1, temp+1, 1, 0, x1-2);
mvwhline(pion1, 2*temp+1, 1, 0, x1-2);
mvwhline(pion1, 3*temp+1, 1, 0, x1-2);
mvwhline(pion1, 4*temp+1, 1, 0, x1-2);
mvwhline(pion1, 5*temp+1, 1, 0, x1-2);
mvwhline(pion1, 6*temp+1, 1, 0, x1-2);
mvwhline(pion1, 7*temp+1, 1, 0, x1-2);
mvwhline(pion1, 8*temp+1, 1, 0, x1-2);
mvwhline(pion1, 9*temp+1, 1, 0, x1-2);
mvwhline(pion1, 10*temp+1, 1, 0, x1-2);
mvwhline(pion1, 11*temp+1, 1, 0, x1-2);
mvwhline(pion1, 12*temp+1, 1, 0, x1-2);
mvwhline(pion1, 13*temp+1, 1, 0, x1-2);
mvwhline(pion1, 14*temp+1, 1, 0, x1-2);
mvwhline(pion1, 17*temp+1, 1, 0, x1-2);
mvwprintw(pion1, temp-1, ((x1 - 8)/2), "%s", "1 MILION");
mvwprintw(pion1, temp, ((x1 - 2)/2), "%s", "ZL");
mvwprintw(pion1, 2*temp, ((x1 - 10)/2), "%s", "500 000 ZL");
mvwprintw(pion1, 3*temp, ((x1 - 10)/2), "%s", "250 000 ZL");
mvwprintw(pion1, 4*temp, ((x1 - 10)/2), "%s", "125 000 ZL");
mvwprintw(pion1, 5*temp, ((x1 - 9)/2), "%s", "64 000 ZL");
wattron(pion1, COLOR_PAIR(1));
mvwprintw(pion1, 6*temp, ((x1 - 9)/2), "%s", "32 000 ZL");
wattroff(pion1, COLOR_PAIR(1));
mvwprintw(pion1, 7*temp, ((x1 - 9)/2), "%s", "16 000 ZL");
mvwprintw(pion1, 8*temp, ((x1 - 8)/2), "%s", "8 000 ZL");
mvwprintw(pion1, 9*temp, ((x1 - 8)/2), "%s", "4 000 ZL");
mvwprintw(pion1, 10*temp, ((x1 - 8)/2), "%s", "2 000 ZL");
wattron(pion1, COLOR_PAIR(1));
mvwprintw(pion1, 11*temp, ((x1 - 8)/2), "%s", "1 000 ZL");
wattroff(pion1, COLOR_PAIR(1));
mvwprintw(pion1, 12*temp, ((x1 - 6)/2), "%s", "500 ZL");
mvwprintw(pion1, 13*temp, ((x1 - 6)/2), "%s", "300 ZL");
mvwprintw(pion1, 14*temp, ((x1 - 6)/2), "%s", "200 ZL");
mvwprintw(pion1, 15*temp, ((x1 - 6)/2), "%s", "100 ZL");
wrefresh(pion1);
mvwhline(pion2dol, 6, 1, 0, x2d-2);
mvwvline(pion2dol, 1, x2d/4, 0, 5);
mvwvline(pion2dol, 1, x2d/2, 0, 5);
mvwvline(pion2dol, 1, (3*x2d)/4, 0, 5);
wattron(pion2dol, COLOR_PAIR(6));
mvwprintw(pion2dol, 3, (((x2d/4) - 5)/2), "%s", "50:50");
mvwprintw(pion2dol, 2, ((((x2d/4) - 7)/2)+(x2d/4)), "%s", "Telefon");
mvwprintw(pion2dol, 3, ((((x2d/4) - 2)/2)+(x2d/4)), "%s", "do");
mvwprintw(pion2dol, 4, ((((x2d/4) - 11)/2)+(x2d/4)), "%s", "przyjaciela");
mvwprintw(pion2dol, 2, ((((x2d/4) - 7)/2)+(x2d/2)), "%s", "Pytanie");
mvwprintw(pion2dol, 3, ((((x2d/4) - 2)/2)+(x2d/2)), "%s", "do");
mvwprintw(pion2dol, 4, ((((x2d/4) - 12)/2)+(x2d/2)), "%s", "publicznosci");
mvwprintw(pion2dol, 3, ((((x2d/4) - 14)/2)+(3*(x2d/4))), "%s", "Zmiana pytania");
mvwprintw(pion2dol, 8, (((x2d-2) - 9)/2), "%s", "REZYGNUJE");
wrefresh(pion2dol);
wattroff(pion2dol, COLOR_PAIR(6));
mvwprintw(pion2up, (y2u/2)-3, ((x2u - 40)/2), "%s", "Witam graczy, widzow przed telewizorami");
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 36)/2), "%s", "i publicznosc zgromadzona w studiu.");
wrefresh(pion2up);
if(intro) napms(2000);
mvwprintw(pion2up, (y2u/2), ((x2u - (43+(strlen(imie))))/2), "W dzisiejszej grze, o milion zagra z nami %s.", imie);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 34)/2), "Powitajmy go/ja wielkimi brawami.");
wrefresh(pion2up);
if(intro) napms(6000);
wclear(pion2up);
box(pion2up, 0, 0);
wrefresh(pion2up);
mvwprintw(pion2up, (y2u/2)-8, ((x2u - 31)/2), "Przed Toba 15 pytan do miliona");
wrefresh(pion2up);
if(intro) napms(2000);
mvwprintw(pion2up, (y2u/2)-6, ((x2u - 24)/2), "Trzy sumy gwarantowane:");
wrefresh(pion2up);
if(intro) napms(1000);
mvwchgat(pion1, 11*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, 12*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, 13*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, 14*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, 15*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwprintw(pion2up, (y2u/2)-5, ((x2u - 13)/2), "1000 zl po 5");
wrefresh(pion2up);
wrefresh(pion1);
if(intro) napms(1000);
mvwchgat(pion1, 6*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, 7*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, 8*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, 9*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, 10*temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 15)/2), "32 000 zl po 10");
wrefresh(pion2up);
wrefresh(pion1);
if(intro) napms(1000);
mvwchgat(pion1, 5*temp, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
if(intro) napms(500);
mvwchgat(pion1, 4*temp, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
if(intro) napms(500);
mvwchgat(pion1, 3*temp, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
if(intro) napms(500);
mvwchgat(pion1, 2*temp, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
if(intro) napms(500);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
mvwprintw(pion2up, (y2u/2)-3, ((x2u - 53)/2), "i 1 milion zl po 15 poprawnych odpowiedziach z rzedu");
wrefresh(pion2up);

mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 3, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 3, NULL);
wrefresh(pion1);
if(intro) napms(250);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 4, NULL);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 4, NULL);
wrefresh(pion1);
if(intro) napms(3000);
mvwchgat(pion1, temp-1, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 2*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 3*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 4*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 5*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 6*temp, 1, x1-2, A_NORMAL, 1, NULL);
mvwchgat(pion1, 7*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 8*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 9*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 10*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 11*temp, 1, x1-2, A_NORMAL, 1, NULL);
mvwchgat(pion1, 12*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 13*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 14*temp, 1, x1-2, A_NORMAL, 0, NULL);
mvwchgat(pion1, 15*temp, 1, x1-2, A_NORMAL, 0, NULL);
wrefresh(pion1);
mvwprintw(pion2up, (y2u/2)-1, ((x2u - 49)/2), "Do swojej dyspozycji masz cztery kola ratunkowe:");
wrefresh(pion2up);
if(intro) napms(1000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 12)/2), "pol na pol");
mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 3, NULL);
wrefresh(pion2dol);
wrefresh(pion2up);
if(intro) napms(1500);
mvwchgat(pion2dol, 1, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 2, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 3, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 4, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 5, 1, (x2d/4)-1, A_NORMAL, 0, NULL);
wrefresh(pion2dol);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 24)/2), "telefon do przyjaciela");
mvwchgat(pion2dol, 1, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 2, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 3, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 4, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 5, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
wrefresh(pion2dol);
wrefresh(pion2up);
if(intro) napms(1500);
mvwchgat(pion2dol, 1, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 2, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 3, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 4, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 5, (x2d/4)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
wrefresh(pion2dol);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 24)/2), "pytanie do publicznosci");
mvwchgat(pion2dol, 1, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 2, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 3, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 4, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 5, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
wrefresh(pion2dol);
wrefresh(pion2up);
if(intro) napms(1500);
mvwchgat(pion2dol, 1, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 2, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 3, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 4, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 5, (x2d/2)+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
wrefresh(pion2dol);
mvwprintw(pion2up, (y2u/2)+4, ((x2u - 17)/2), "i zmiana pytania");
mvwchgat(pion2dol, 1, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 2, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 3, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 4, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 5, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 3, NULL);
wrefresh(pion2dol);
wrefresh(pion2up);
if(intro) napms(1500);
mvwchgat(pion2dol, 1, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 2, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 3, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 4, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 5, (3*(x2d/4))+1, ((x2d/4)-1), A_NORMAL, 0, NULL);
wrefresh(pion2dol);
wrefresh(pion2up);
mvwprintw(pion2up, (y2u/2)+6, ((x2u - 63)/2), "W kazdej chwili mozesz sie wycofac i zabrac wygrane pieniadze.");
wrefresh(pion2up);
mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 3, NULL);
wrefresh(pion2dol);
if(intro) napms(250);
mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 0, NULL);
wrefresh(pion2dol);
if(intro) napms(250);
mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 3, NULL);
wrefresh(pion2dol);
if(intro) napms(250);
mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 0, NULL);
wrefresh(pion2dol);
if(intro) napms(250);
mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 3, NULL);
wrefresh(pion2dol);
if(intro) napms(250);
mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 0, NULL);
wrefresh(pion2dol);
if(intro) napms(250);
mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 3, NULL);
mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 3, NULL);
wrefresh(pion2dol);
if(intro) napms(250);
mvwchgat(pion2dol, 7, 1, x2d-2, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 8, 1, x2d-2, A_NORMAL, 0, NULL);
mvwchgat(pion2dol, 9, 1, x2d-2, A_NORMAL, 0, NULL);
wrefresh(pion2dol);
if(intro) napms(2000);
wclear(pion2up);
box(pion2up, 0, 0);
wrefresh(pion2up);
mvwprintw(pion2up, (y2u/2), ((x2u - 35)/2), "%s", "Rozpoczynamy gre o milion zlotych!");
wrefresh(pion2up);
napms(2000);
wclear(pion2up);
box(pion2up, 0, 0);
wrefresh(pion2up);

teldp=1;
polnpol=1;
pytdpubl=1;
zmpyt=1;
wyb=0;
mam=0;
gra=1;

p100();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p200();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p300();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p500();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p1000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p2000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p4000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p8000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p16000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p32000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p64000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p125000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p250000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p500000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}

p1000000();
interfejs();
pewien();
rozpozn_odp();
if(gra==0)
	{	
	wrefresh(pion1);
	wrefresh(pion2up);
	wrefresh(pion2dol);
	getch();
	endwin();
	return 0;	
	}
wrefresh(pion1);
wrefresh(pion2up);
wrefresh(pion2dol);
getch();
endwin();
return 0;
}



