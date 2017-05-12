#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p125000()
{
srand(time(NULL));
otgram=125000;
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 44)/2), "%s", "Jaki ksztalt ma pole wewnetrzne w baseballu?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "trojkata");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 8)/2), "%s", "kwadratu");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "okregu");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "pólkola");
wrefresh(pion2up);
napms(1500);
prawidlodp=2;
break;
}
case 1:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 49)/2), "%s", "Ktore ze swiat nie jest obchodzone w listopadzie?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "Zaduszki");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 14)/2), "%s", "Allerseelentag");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 16)/2), "%s", "Thanksgiving Day");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "Chanuka");
wrefresh(pion2up);
napms(1500);
prawidlodp=4;
break;
}
case 2:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 59)/2), "%s", "Pancerz z metalowych lusek naszytych na skorzany kaftan to:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "kolczuga");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 17)/2), "%s", "zbroja kostiumowa");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "karacena");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 14)/2), "%s", "zbroja plytowa");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 30)/2), "%s", "Stolica stanu Waszyngton jest:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "Columbus");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Olympia");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 10)/2), "%s", "Providence");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 10)/2), "%s", "Sacramento");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 35)/2), "%s", "Ile kregow piersiowych ma czlowiek?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "dziesiec");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 9)/2), "%s", "dwanascie");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 11)/2), "%s", "czternascie");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 10)/2), "%s", "szesnascie");
wrefresh(pion2up);
napms(1500);
prawidlodp=2;
break;
}
case 5:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 46)/2), "%s", "Gdzie w Europie znajduje się gory Kaledonskie?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 10)/2), "%s", "w Norwegii");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "w Danii");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 19)/2), "%s", "w Wielkiej Brytanii");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 10)/2), "%s", "w Irlandii");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
case 6:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 30)/2), "%s", "Ikonabul to stary druk sprzed:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 7)/2), "%s", "1201 r.");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "1401 r.");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "1501 r.");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "1801 r.");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
case 7:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 29)/2), "%s", "Woda krolewska to mieszanina:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "zasad");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 4)/2), "%s", "soli");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "kwasow");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 19)/2), "%s", "olejkow eterycznych");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
case 8:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 47)/2), "%s", "Senat, wyzsza izba parlamentu polskiego, liczy:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 13)/2), "%s", "460 senatorow");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 13)/2), "%s", "120 senatorow");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 13)/2), "%s", "100 senatorow");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 12)/2), "%s", "86 senatorow");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
case 9:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 125000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 35)/2), "%s", "Ktora z gier nie jest gra karciana?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 7)/2), "%s", "bakarat");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "kanasta");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "tryktrak");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 8)/2), "%s", "cribbage");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
default: break;
}
}

