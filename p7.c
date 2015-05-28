/* zlicz.c 
Program zlicza znaki, slowa i linie tekstu */
#include <stdio.h>
#include <conio.h>
#define IN 1 /* wewn. slowa */
#define OUT 0 /* zewn. slowa */
/* zlicz wejsciowe wiers
ze, slowa, znaki */
main()
{
int c, nl, nw, nc, state, nn;
state=OUT;
nl=nw=nc=nn=0;
/* nl 
-
ilosc linii
nw 
-
ilosc slow
nc 
-
ilosc znakow
*/
clrscr();
puts("Program zlicza znaki, slowa i linie tekstu");
puts("Wprowadz tekst, ^Z 
-
koniec
\
n");
while ((c=get
char()) != EOF)
{
++nc;
if (c=='
\
n')
{
++nl;
{ printf("
\
n");}
}
if (c==' ' || c=='
\
n' || c=='
\
t')
{
++nn;
state=OUT;
if ((nn==1) && (state==OUT)) printf("
\
n");
}
else
{
putchar(c);
if (state==OUT)
{
state=IN;
++nw;
nn=0;
}
}
}
printf("Ilosc linii: %d Ilosc
slow: %d Ilosc znakow: %d
\
n",nl,nw,nc);
getch();
return 0;
}