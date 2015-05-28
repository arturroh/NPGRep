/* 
rowkw1.c 
-
program rozwiazywania rownania kwadratowego */
#include <stdio.h>
#include <math.h>
#include <conio.h>
main()
{
float a,b,c,d,x1,x2;
clrscr();
printf("Podaj wspolczynniki rownania ax^2+bx+c
\
n");
pri
ntf("a b c: ");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
printf("bledne dane
\
n");
else
{
d=b*b
-
4*a*c;
if(d<0)
printf("brak pierwiastkow "
"rzeczywistych
\
n");
else if(d==0)
{
x1=
-
b/(2*a);
printf("x1=%f
\
n",x1);
}
else
{
x1=(
-
b
-
sqrt(d))/(2*a);
x2=(
-
b+sqrt(d))/(2*a)
;
printf("x1=%f x2=%f
\
n",x1,x2);
}
}
getch();
clrscr();
return 0;
}