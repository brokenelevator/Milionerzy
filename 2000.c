#include<ncurses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y1, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p2000()
{
srand(time(NULL));
otgram=2000;
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 18)/2), "%s", "Kopalina nie jest?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "glina");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 4)/2), "%s", "zwir");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "margiel");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "cement");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=4;
break;
}
case 1:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 45)/2), "%s", "Jak nazywa sie gruczol wydzielajacy insuline?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "trzustka");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 9)/2), "%s", "nadnercza");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "tarczyca");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 17)/2), "%s", "przysadka mozgowa");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=1;
break;
}
case 2:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 51)/2), "%s", "Jaka rosline nazywamy niekiedy slodkim ziemniakiem?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "batat");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "bambus");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 4)/2), "%s", "jams");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 5)/2), "%s", "burak");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=1;
break;
}
case 3:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 39)/2), "%s", "Lodz wykonana z jednego pnia drzewa to:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "dlubanka");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "sampan");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "gondola");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 8)/2), "%s", "karawela");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=1;
break;
}
case 4:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 43)/2), "%s", "Najmniejsza jednostka ilosci informacji to:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 4)/2), "%s", "bajt");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 5)/2), "%s", "octet");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "piksel");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 3)/2), "%s", "bit");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=4;
break;
}
case 5:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 39)/2), "%s", "Ktore z tych gor nie leza na polwyspie?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 13)/2), "%s", "Gory Betyckie");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 18)/2), "%s", "Gory Skandynawskie");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "Apeniny");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "Kaukaz");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=4;
break;
}
case 6:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 42)/2), "%s", "Ile chromosomow zawiera plemnik czlowieka?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 2)/2), "%s", "17");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 2)/2), "%s", "20");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 2)/2), "%s", "23");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 2)/2), "%s", "26");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=3;
break;
}
case 7:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 22)/2), "%s", "Skad wywodzi sie joga?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 7)/2), "%s", "z Indii");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "z Chin");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 9)/2), "%s", "z Japonii");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "z Korei");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=1;
break;
}
case 8:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 24)/2), "%s", "Czescia siodla nie jest?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 9)/2), "%s", "siedzisko");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 8)/2), "%s", "strzemie");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "tybinka");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 8)/2), "%s", "wedzidlo");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=4;
break;
}
case 9:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 2000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 73)/2), "%s", "O kims kto mial duzo szczescia mowimy ze trafilo mu sie jak slepej kurze:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "perla");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 5)/2), "%s", "laska");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "ziarno");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 4)/2), "%s", "plot");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=3;
break;
}
default: break;
}
}

