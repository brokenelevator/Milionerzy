#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p4000()
{
srand(time(NULL));
otgram=4000;
wclear(pion2up);
box(pion2up, 0, 0);
wrefresh(pion2up);
do{
pytnr=(rand() % 10);
}while(pytnr==oldpytnr);
switch(pytnr)
{
case 0:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 28)/2), "%s", "Jak inaczej nazywamy absynt?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 10)/2), "%s", "piolunowka");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 8)/2), "%s", "anyzowka");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 10)/2), "%s", "jalowcowka");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 8)/2), "%s", "mietowka");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
case 1:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 48)/2), "%s", "Co bylo na poczatku swiata w mitologii greckiej?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "Slowo");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 5)/2), "%s", "Chaos");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "Kosmos");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 4)/2), "%s", "Gaia");
wrefresh(pion2up);
napms(1500);
prawidlodp=2;
break;
}
case 2:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 21)/2), "%s", "Grenlandia nalezy do:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 17)/2), "%s", "Wielkiej Brytanii");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 3)/2), "%s", "USA");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 5)/2), "%s", "Danii");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "Szwecji");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
case 3:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 36)/2), "%s", "W jakim kraju lezy pustynia Gibsona?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 9)/2), "%s", "w Meksyku");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 11)/2), "%s", "w Australii");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 5)/2), "%s", "w USA");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 10)/2), "%s", "w Algierii");
wrefresh(pion2up);
napms(1500);
prawidlodp=2;
break;
}
case 4:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 44)/2), "%s", "Czyim ojcem nie byl szekspirowski krol Lear?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "Goneryli");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "Regany");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "Kordelii");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "Ofelii");
wrefresh(pion2up);
napms(1500);
prawidlodp=4;
break;
}
case 5:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 69)/2), "%s", "Ozdobny uchwyt metalowy na drzwiach, czasem w ksztalcie glowy lwa to:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 6)/2), "%s", "antaba");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "abakus");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "impost");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "tralka");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
case 6:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 34)/2), "%s", "Ktore ze slow nie oznacza aureoli?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "mandorla");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 4)/2), "%s", "nimb");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "gloria");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "aurora");
wrefresh(pion2up);
napms(1500);
prawidlodp=4;
break;
}
case 7:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 40)/2), "%s", "Jak inaczej nazywa sie ziele angielskie?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 6)/2), "%s", "piment");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "cayenne");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 5)/2), "%s", "curry");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "tabasco");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
case 8:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 46)/2), "%s", "Najjasniejsza gwiazda naszego firmamentu jest:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 16)/2), "%s", "Proxima Centauri");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Syriusz");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "Toliman");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "Canopus");
wrefresh(pion2up);
napms(1500);
prawidlodp=2;
break;
}
case 9:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 4000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 53)/2), "%s", "Znak zodiaku, ktorego lacinska nazwa brzmi gemini to:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 9)/2), "%s", "Bliznieta");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 4)/2), "%s", "Panna");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "Wodnik");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 4)/2), "%s", "Waga");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
default: break;
}
}

