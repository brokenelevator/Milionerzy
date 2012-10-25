#include<ncurses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y1, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p300()
{
srand(time(NULL));
otgram=300;
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 43)/2), "%s", "Sport wodny uprawiany na desce z zaglem to:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 10)/2), "%s", "skateboard");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "surfing");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 11)/2), "%s", "windsurfing");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "bojery");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=3;
break;
}
case 1:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 41)/2), "%s", "Kto zostal wiceprezesem PZPN w 1999 roku?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 13)/2), "%s", "Grzegorz Lato");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 15)/2), "%s", "Zbigniew Boniek");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 13)/2), "%s", "Roman Kosecki");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 15)/2), "%s", "Jan Tomaszewski");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=2;
break;
}
case 2:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 18)/2), "%s", "Wywar rosolowy to:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 6)/2), "%s", "bulion");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 3)/2), "%s", "zur");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 11)/2), "%s", "wassersuppe");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 12)/2), "%s", "bulion Ureya");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 41)/2), "%s", "Jak nazywa sie najwiekszy dzwon w Polsce?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 6)/2), "%s", "August");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Zygmunt");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 9)/2), "%s", "Kazimierz");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 8)/2), "%s", "Boleslaw");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=2;
break;
}
case 4:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 66)/2), "%s", "W jakich jedniostkach mierzy sie dlugosc i szerokosc geograficzna?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 20)/2), "%s", "godzinach i minutach");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "metrach");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 20)/2), "%s", "stopniach i minutach");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "milach");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=3;
break;
}
case 5:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 69)/2), "%s", "Jakie urz. sluzy do wykrywania, zapisywania i badania trzesien ziemi?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 10)/2), "%s", "polarymetr");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 8)/2), "%s", "aerograf");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 11)/2), "%s", "spektrometr");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 10)/2), "%s", "sejsmograf");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 34)/2), "%s", "Podwiazki sluza do podtrzymywania:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 7)/2), "%s", "rajstop");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 8)/2), "%s", "ponczoch");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "spodni");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 8)/2), "%s", "rajtuzow");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=2;
break;
}
case 7:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 41)/2), "%s", "Tworca jakiego imperium byl Czyngis-chan?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 11)/2), "%s", "japonskiego");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 10)/2), "%s", "chinskiego");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 11)/2), "%s", "tatarskiego");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 12)/2), "%s", "mongolskiego");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=4;
break;
}
case 8:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 35)/2), "%s", "Czego nie oznacza nazwa koziorozec?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 13)/2), "%s", "znaku zodiaku");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 9)/2), "%s", "zwrotnika");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 20)/2), "%s", "sera z koziego mleka");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 14)/2), "%s", "kozla skalnego");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=3;
break;
}
case 9:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 300 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 45)/2), "%s", "Jak nazywa sie najwyzsza skocznia narciarska?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 7)/2), "%s", "zyrafia");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 8)/2), "%s", "sloniowa");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "mamucia");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "zurawia");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=3;
break;
}
default: break;
}
}

