#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p16000()
{
srand(time(NULL));
otgram=16000;
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 32)/2), "%s", "Do dynastii Andegawenow należal?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 13)/2), "%s", "Leszek Czarny");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 16)/2), "%s", "Ludwik Wegierski");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 13)/2), "%s", "Henryk Walezy");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 16)/2), "%s", "Henryk IV Probus");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 31)/2), "%s", "Enzymow trawinnych nie zawiera?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "slina");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 12)/2), "%s", "osocze limfy");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 14)/2), "%s", "sok trzustkowy");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 12)/2), "%s", "sok jelitowy");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 10)/2), "%s", "Trotyl to?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 12)/2), "%s", "1,2-butadien");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 19)/2), "%s", "2,4,6-trinitrofenol");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 20)/2), "%s", "2,4,6-trinitrotoluen");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 16)/2), "%s", "1,2-dichloroetan");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 45)/2), "%s", "Jaka liczba odpowiada rzymskiemu zapisowi LX?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 2)/2), "%s", "60");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 2)/2), "%s", "70");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 2)/2), "%s", "80");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 2)/2), "%s", "90");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
case 4:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 46)/2), "%s", "Jak nazywa się czterostrunowa gitara hawajska?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "sitar");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "ukulele");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "bandura");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 5)/2), "%s", "banjo");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 60)/2), "%s", "Podczas ktorego z kolei rejsu zatonał transatlantyk Titanic?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 18)/2), "%s", "podczas pierwszego");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 16)/2), "%s", "podczas drugiego");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 17)/2), "%s", "podczas trzeciego");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 15)/2), "%s", "podczas piatego");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 40)/2), "%s", "Jak inaczej nazywaja sie kregi guziczne?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 16)/2), "%s", "krzywizna szyjna");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 12)/2), "%s", "kosc ogonowa");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 13)/2), "%s", "kosc krzyzowa");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "mostek");
wrefresh(pion2up);
napms(1500);
prawidlodp=2;
break;
}
case 7:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 39)/2), "%s", "Planeta polozona najblizej Slonca jest:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "Wenus");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Merkury");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "Saturn");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 4)/2), "%s", "Mars");
wrefresh(pion2up);
napms(1500);
prawidlodp=2;
break;
}
case 8:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 37)/2), "%s", "Co projektowal Louis Comfort Tiffany?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 17)/2), "%s", "meble tapicerskie");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 17)/2), "%s", "szklo artystyczne");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "zabawki");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 9)/2), "%s", "kapelusze");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 25)/2), "%s", "O to pytanie za 16000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 46)/2), "%s", "Najdluzsza rzeka polwyspu Indochinskiego jest:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 6)/2), "%s", "Mekong");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "Saluin");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "Irawadi");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 5)/2), "%s", "Menam");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
default: break;
}
}

