/* quiz3.c Kilka funkcji 
-
wywoluje funkcja main() */
#include <stdio.h>
#include 
<conio.h>
int welcome(); /* Prototyp funkcji */
int question();
int answer();
int the_end();
int main()
{
clrscr();
puts("1. 
Program glowny: main()");
welcome();
question();
answer();
the_end();
puts("2. Program glowny: main()");
getch();
return(0);
} /* K
oniec main() */
/* Funkcje 
-
definicje */
welcome()
{
puts("Funkcja welcome()");
puts("Witamy
\
n");
return (0);
}
int question()
{
puts("Funkcja question()");
puts("Glowny produkt Microsoft? 
\
n");
return;
}
int answer()
{
puts("Funkcja answer()");
puts("Win
dows.
\
n");
return 0;
}
int the_end()
{
puts("Funkcja the_end()");
puts("Dziekuje.");
return 0;
}