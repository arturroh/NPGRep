/* quiz2.c Funkcje */
#include <stdio.h>
#include <conio.h>
int answer();
int question();
main()
{
clrscr();
puts("Witamy w turnieju
\
n");
q
uestion(); /* Wywolanie funkcji question() */
puts("Dzieki za udzial.
\
n");
getch();
return(0);
}
int question()
{
int move_on;
puts("Nazwa graf. interfejsu firmy z Microsoftu.
\
n");
puts("Enter 
-
bedzie odpowiedz
\
n");
getch();
answer(); /* Funkcja question(
) wywoluje funkcje answer() */
return;
}
int answer()
{
puts("To Windows.
\
n");
return;
}