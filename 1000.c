#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p1000()
{
srand(time(NULL));
otgram=1000;
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 30)/2), "%s", "Do jakiego morza wplywa Dunaj?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 7)/2), "%s", "Bialego");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Zoltego");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "Czarnego");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 10)/2), "%s", "Czerwonego");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
case 1:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 57)/2), "%s", "Ile prac musial wykonac w sluzbie u Eurysteusza Herakles?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 1)/2), "%s", "5");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 1)/2), "%s", "9");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 1)/2), "%s", "12");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 1)/2), "%s", "20");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
case 2:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 44)/2), "%s", "Na jakim kontynencie znajduje sie Patagonia?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 19)/2), "%s", "w Ameryce Polnocnej");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 17)/2), "%s", "w Am. Poludniowej");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "w Afryce");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 11)/2), "%s", "w Australii");
wrefresh(pion2up);
napms(1500);
prawidlodp=2;
break;
}
case 3:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 25)/2), "%s", "Do naczelnych nie naleza:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 10)/2), "%s", "lemurowate");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "wyraki");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 15)/2), "%s", "malpy waskonose");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "leniwce");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 42)/2), "%s", "Wielkosc ktora okresla odczyn roztworu to:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 2)/2), "%s", "pH");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 4)/2), "%s", "kcal");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 3)/2), "%s", "ASO");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 2)/2), "%s", "IQ");
wrefresh(pion2up);
napms(1500);
prawidlodp=1;
break;
}
case 5:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 58)/2), "%s", "Ktory z podanych potworow potrafil zabijac ludzi wzrokiem?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 13)/2), "%s", "smok wawelski");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 10)/2), "%s", "bazyliszek");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "lewiatan");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "Scylla");
wrefresh(pion2up);
napms(1500);
prawidlodp=2;
break;
}
case 6:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 35)/2), "%s", "Fort Knox zawiera federalne zapasy:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 9)/2), "%s", "diamentow");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 12)/2), "%s", "dziel sztuki");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 5)/2), "%s", "zlota");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "platyny");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 52)/2), "%s", "O czyim pojedynku opowiada Wojski w \"Panu Tadeuszu\"?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 14)/2), "%s", "Pawla z Gawlem");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 17)/2), "%s", "Doweyki z Domeyka");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 15)/2), "%s", "Lelum z Polelum");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 18)/2), "%s", "Czesnika z Rejetem");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 47)/2), "%s", "Z ilu atomow tlenu sklada sie czasteczka ozonu?");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 9)/2), "%s", "z jednego");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "z dwoch");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "z trzech");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 10)/2), "%s", "z czterech");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 24)/2), "%s", "O to pytanie za 1000 zl:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 33)/2), "%s", "Sniezka jest najwyzszym szczytem:");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2), ((x2u - 10)/2), "%s", "Gor Sowich");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 16)/2), "%s", "Gor Bystrzyckich");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 10)/2), "%s", "Karkonoszy");
wrefresh(pion2up);
napms(1500);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 14)/2), "%s", "Beskidu Malego");
wrefresh(pion2up);
napms(1500);
prawidlodp=3;
break;
}
default: break;
}
}

