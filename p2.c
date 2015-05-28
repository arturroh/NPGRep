#include <stdio.h>
#include <dos.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#define MAX1 25
#define MAX2 30
void main()
{
char imie[MAX1], nazwisko[MAX2];
int wiek;
clrscr();
printf("Podaj swoje imie: ");
gets(imie);
printf("Podaj s
woje nazwisko: ");
gets(nazwisko);
printf("Podaj swoj wiek: ");
scanf("%d", &wiek); 
printf("Imie: %s 
\
n", imie);
printf("Nazwisko: %s 
\
n", nazwisko);
printf("Wiek: %d 
\
n",wiek);
printf("Nazywasz sie: %s %s. Masz %d lat. ", imie, nazwisko, wiek);
getch();
}