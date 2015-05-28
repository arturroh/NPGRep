#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main(void)
{
int length, length1, i;
char *string = "TO JEST LANCUCH ZNAKOW (NAPIS)"
;
char *string1 = "to jest lancuch drugi";
clrscr();
puts("1) Zamiana lancucha");
puts("TO JEST LANasdfasdfradsfCUCH ZNAKOW (NAPIS)");
puts("na male litery
\
n");
length = strlen(string);
for (i=0; i<length; i++)
{
string[i] = tolower(string[i]);
}
printf("%s
\
n",string);
puts("
--------------------------------------
");
puts("
\
n2) Zamiana lancucha");
puts("to jest lancuch drugi");
puts("na duze litery
\
n");
length1 = strlen(string1);
for (i=0; i<length1; i++)
{
string1[i] = toupper(string1[i]);
}
printf("%s
\
n",string1);
getc
h();
return 0;
}