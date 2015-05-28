/* Program zg1.c 
–
Komputer zgaduje wymyslona przez uzytkown. liczbe */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define p 1
#define k 1000
int x, xm, xd, krok, tak;
char o;
void main (void)
{
clr
scr();
tak=0;
x=(p+k)/ 2;
xm=p;
xd=k;
krok=0;
printf("Program ZG1.CPP
\
n");
printf("
\
nProgram zgaduje wymyslona przez Ciebie liczbe calkowita z zakresu 1..1000");
printf("
\
n
\
nWyswietla kolejno proponowane wartosci, odpowiedz: ");
printf("
\
nczy liczba za duz
a 
-
d, za mala 
-
m, czy tez wlasciwa 
-
w");
printf("
\
n
\
n");
printf("
\
nNacisnij cos .. ");
o=getche();
clrscr();
while (tak != 1)
{
krok=krok+1;
printf("
\
nProponowana liczba %i ",x);
printf("
\
nOdpowiedz: d
-
liczba za duza, m
-
za mala, w
-
wlasciwa (d/m/w): ");
o=' ';
do
{
o=getchar();
o=tolower(o);
}
while ((o != 'd') && (o != 'm') && (o != 'w'));
if (o == 'w')
{
tak=1;
printf("
\
nDobra! x= %i ",x);
}
else /* odp <> 'w' */
{
if (o=='d')
{
printf("
\
nOdpowiedziales ze za duza
\
n");
xd=x;
x=(xm + xd) / 2;
} /* 'd' */
else /* 'm' */
{
printf("
\
nOdpowiedziales, ze za mala
\
n");
xm=x;
x=((xm+xd)/2) +1;
}; /* 'm' */
}; /* odp <> 'w' */
}; /* while */
printf("
\
nZgadlem po %i krokach
\
n ",krok);
printf("
\
nNacisnij cos ");
o=getche();
clrscr();
} /* main */