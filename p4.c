/* zestawienie temper. Fahrenheita
-
Celsjusza dla f=0,20,..,300
wg B.W> Kernighana i D.M. Ritchiego */
#include <stdio.h>
#include <conio.h>
main()
{
int fahr,celsius;
int dolny, gorny,krok;
dolny=0; /* dolna granica trmper */
gorny=300; /* gorna granica */
krok=20; /* rozmiar kroku */
clrscr();
puts("Temperatury Fahrenheita i Celsjusza
\
n");
puts("C=5*(F
-
3
2)/9
\
n");
puts("st F | st C 
\
n");
puts("
---------------
"); 
fahr=dolny;
while (fahr<=gorny)
{
celsius=5*(fahr
-
32)/9;
printf("%d
\
t%d
\
n",fahr,celsius);
fahr=fahr+krok;
}
getch();
return 0;
}