#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p250000()
{
srand(time(NULL));
otgram=250000;
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 32)/2), "%s", "Co oznacza lacinskie: impromptu?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 13)/2), "%s", "na poczekaniu");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 10)/2), "%s", "na korzysc");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 10)/2), "%s", "w praktyce");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 9)/2), "%s", "na zawsze");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 55)/2), "%s", "Przez ktore z panstw afrykanskich nie przebiega rownik?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 4)/2), "%s", "Zair");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Etiopie");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 5)/2), "%s", "Kenie");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 5)/2), "%s", "Kongo");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 52)/2), "%s", "W jakim gwiazdozbiorze znajduje sie gwiazda Syriusz?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 13)/2), "%s", "Wielkiego Psa");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 4)/2), "%s", "Byka");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 15)/2), "%s", "Krzyża Poludnia");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "Oriona");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
case 3:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 25)/2), "%s", "Najlzejszym metalem jest:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 4)/2), "%s", "cynk");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 3)/2), "%s", "bar");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 5)/2), "%s", "chrom");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 3)/2), "%s", "lit");
wrefresh(pion2up);
napms(1500);
prawidlodp=4;
break;
}
case 4:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 17)/2), "%s", "Midas byl krolem:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 3)/2), "%s", "Teb");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "Frygii");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 5)/2), "%s", "Myken");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "Tracji");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 58)/2), "%s", "Ktory z wymienionych ukladów nie jest ukladem Black Jacka?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 7)/2), "%s", "as-dama");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 8)/2), "%s", "as-walet");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 13)/2), "%s", "as-dziesiatka");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 5)/2), "%s", "as-as");
wrefresh(pion2up);
napms(1500);
prawidlodp=4;
break;
}
case 6:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 63)/2), "%s", "Na granicy ktorego z panstw nie znajduje sie Jezioro Bodenskie?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "Wloch");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Niemiec");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 10)/2), "%s", "Szwajcarii");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "Austrii");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
case 7:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 38)/2), "%s", "Tył języka najsilniej reaguje na smak:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 6)/2), "%s", "slodki");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "kwasny");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 5)/2), "%s", "slony");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "gorzki");
wrefresh(pion2up);
napms(1500);
prawidlodp=4;
break;
}
case 8:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 70)/2), "%s", "Ilu braci mial Robinson Crusoe, glowny bohater powiesci Daniela Defoe?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "dwoch");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "trzech");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "czterech");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "pieciu");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
case 9:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 26)/2), "%s", "O to pytanie za 250000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 39)/2), "%s", "Wyspa Mauritius zawdziecza swoja nazwe:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 9)/2), "%s", "Hiszpanom");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 9)/2), "%s", "Francuzom");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 9)/2), "%s", "Holendrom");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 8)/2), "%s", "Anglikom");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
default: break;
}
}

