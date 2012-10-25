#include<ncurses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y1, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p1000000()
{
srand(time(NULL));
otgram=1000000;
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 69)/2), "%s", "Ktore z zeber, liczac od gory, nalezy do tak zwanych zeber rzekomych?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 7)/2), "%s", "czwarte");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 9)/2), "%s", "dziewiate");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 5)/2), "%s", "piate");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "szoste");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=2;
break;
}
case 1:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 51)/2), "%s", "Zapowiedz czego zawierala druga tajemnica fatimska?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 18)/2), "%s", "zamachu na papieza");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 16)/2), "%s", "nawrocenia Rosji");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 12)/2), "%s", "konca swiata");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 19)/2), "%s", "III wojny swiatowej");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 49)/2), "%s", "Przez ktore panstwo nie przechodzi zwrotnik Raka?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "Indie");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 16)/2), "%s", "Arabia Saudyjska");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "Maroko");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 6)/2), "%s", "Meksyk");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=3;
break;
}
case 3:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 44)/2), "%s", "Ktory z terminow nie okresla skladnika krwi?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 11)/2), "%s", "hemoglobina");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 8)/2), "%s", "limfocyt");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 7)/2), "%s", "tyrocyt");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 10)/2), "%s", "granulocyt");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=3;
break;
}
case 4:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 55)/2), "%s", "W 1983 roku Jan Pawel II spotkal sie z Lechem Walesa w:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 9)/2), "%s", "Watykanie");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Gdansku");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 11)/2), "%s", "Nowej Hucie");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 22)/2), "%s", "Dolinie Chocholowskiej");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 56)/2), "%s", "\"Bibi\" Netanjahu byl premierem i szefem jakiej partii:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "Likud");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 7)/2), "%s", "Moledet");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 6)/2), "%s", "Mafdal");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 4)/2), "%s", "Szas");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=1;
break;
}
case 6:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 55)/2), "%s", "Ktore z drzew nie nalezy do grupy tzw. drzew zelaznych?");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 15)/2), "%s", "parrocja perska");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 15)/2), "%s", "grab karolinski");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 10)/2), "%s", "mamutowiec");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 9)/2), "%s", "wiazowiec");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 59)/2), "%s", "Aktorka, ktora stala sie pierwowzorem filmowego wampa byla:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 10)/2), "%s", "Pola Negri");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 10)/2), "%s", "Theda Bara");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 8)/2), "%s", "Mae West");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 13)/2), "%s", "Mary Pickford");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=2;
break;
}
case 8:
{
odpa=1;
odpb=1;
odpc=1;
odpd=1;
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 47)/2), "%s", "Pierwszym znanym panstwem Slowian bylo panstwo:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 5)/2), "%s", "Polan");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 6)/2), "%s", "Samona");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 15)/2), "%s", "wielkomorawskie");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 7)/2), "%s", "czeskie");
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
mvwprintw(pion2up, (y2u/2)-4, ((x2u - 27)/2), "%s", "O to pytanie za 1000000 zl:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)-2, ((x2u - 46)/2), "%s", "Pojecie homo sovieticus wprowadzil do kultury:");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2), ((x2u - 15)/2), "%s", "Aleksander Mien");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+1, ((x2u - 19)/2), "%s", "Aleksander Zinowjew");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+2, ((x2u - 21)/2), "%s", "Aleksander Solzenicyn");
wrefresh(pion2up);
usleep(1500000);
mvwprintw(pion2up, (y2u/2)+3, ((x2u - 17)/2), "%s", "Siergiej Kowaliow");
wrefresh(pion2up);
usleep(1500000);
prawidlodp=2;
break;
}
default: break;
}
}

