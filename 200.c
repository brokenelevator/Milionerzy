#include<ncurses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y1, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p200()
{
srand(time(NULL));
otgram=200;
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 21)/2), "%s", "Persona non grata to:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 17)/2), "%s", "osoba niepozadana");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 17)/2), "%s", "dusza towarzystwa");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 15)/2), "%s", "osoba nieobecna");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 18)/2), "%s", "osoba niepuntualna");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=1;
break;
}
case 1:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 31)/2), "%s", "Osoba chodzaca w czasie snu to:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 9)/2), "%s", "dyslektyk");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "heretyk");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "diabetyk");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "lunatyk");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=4;
break;
}
case 2:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 41)/2), "%s", "Gdzie powstal pierwszy klub pilki noznej?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "w USA");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 8)/2), "%s", "w Anglii");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 10)/2), "%s", "w Holandii");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 9)/2), "%s", "w Japonii");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=2;
break;
}
case 3:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 40)/2), "%s", "Dac komus nauczke to pokazac gdzie raki:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 6)/2), "%s", "nocuja");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "zimuja");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 9)/2), "%s", "czmychaja");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "koncza");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 34)/2), "%s", "Stolica jakiego panstwa jest Oslo?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "Danii");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Szwecji");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "Belgii");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 8)/2), "%s", "Norwegii");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 32)/2), "%s", "Ktore z orzechow sa najmniejsze?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 8)/2), "%s", "kokosowe");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "wloskie");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 12)/2), "%s", "brazylijskie");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 10)/2), "%s", "pistacjowe");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 57)/2), "%s", "Sportowcow jakiej dyscypliny nazywa sie szczypiornistami?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 15)/2), "%s", "rzutu oszczepem");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 14)/2), "%s", "skoku o tyczce");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 13)/2), "%s", "pilki recznej");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 5)/2), "%s", "golfa");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 24)/2), "%s", "Odmiana gruszy nie jest:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 6)/2), "%s", "klapsa");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 4)/2), "%s", "bera");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "renkloda");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 11)/2), "%s", "konferencja");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=3;
break;
}
case 8:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 29)/2), "%s", "Tradycyjny stroj japonski to:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 6)/2), "%s", "peplos");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "kimono");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 4)/2), "%s", "sari");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "sarong");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=2;
break;
}
case 9:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 200 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 44)/2), "%s", "Jakie urzadzenie potocznie nazywamy korkiem?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 7)/2), "%s", "licznik");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 11)/2), "%s", "bezpiecznik");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "dzwonek");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "kontakt");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=2;
break;
}
default: break;
}
}

