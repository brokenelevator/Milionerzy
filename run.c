#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char pwd[150], xterm[ ]= "xterm -e \"";
int a;
FILE * dwp;

int main()
{
system("pwd >typescript");
dwp = fopen ("typescript" , "r");
fgets (pwd , 150 , dwp);
pwd[strlen(pwd)-1]= '/';
strcat(xterm, pwd);
strcat(xterm, "main.exe\"");
system(xterm);
return 0;
}


