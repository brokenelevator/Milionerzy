#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void p100(); 
void p200(); 
void p300(); 
void p500(); 
void p1000(); 
void p2000(); 
void p4000(); 
void p8000(); 
void p16000(); 
void p32000(); 
void p64000(); 
void p125000(); 
void p250000(); 
void p500000(); 
void p1000000();

void zmiana_pytania()
{
oldpytnr=1000;
zmpyt=0;
pion2dol_draw();
oldpytnr=pytnr;
switch(otgram)
	{
	case 100: p100(); break;
	case 200: p200(); break;
	case 300: p300(); break;
	case 500: p500(); break;
	case 1000: p1000(); break;
	case 2000: p2000(); break;
	case 4000: p4000(); break;
	case 8000: p8000(); break;
	case 16000: p16000(); break;
	case 32000: p32000(); break;
	case 64000: p64000(); break;
	case 125000: p125000(); break;
	case 250000: p250000(); break;
	case 500000: p500000(); break;
	case 1000000: p1000000(); break;  /*(wygrales milion! wypisuje czek na milion zlotych) (jest to suma gwarantowana)*/
	default: break;
	}
oldpytnr=1000;
interfejs();
pewien();
rozpozn_odp();
}


