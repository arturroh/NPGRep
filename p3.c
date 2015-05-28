#include <conio.h>
#include <stdio.h>
void main()
{
char name[10], letter;
int index;
int initial;
index=0;
clrscr();
puts("Podaj 1 lit
ere imienia: ");
initial = getchar();
putchar('
\
n');
putchar(initial);
putchar('
\
n');
printf("
\
n Twoj inicjal: %c 
\
n",initial);
getch();
puts("
\
nPodaj imie, nacisnij Enter");
do
{
letter=getchar();
name[index]=letter;
index++;
}
while(letter !='
\
r' && inde
x<9);
name[index]='
\
0';
putchar('
\
n');
puts(name);
getch();
}