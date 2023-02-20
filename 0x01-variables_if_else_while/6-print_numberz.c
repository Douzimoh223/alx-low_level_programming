#include <stdio.h>
/**
*main -  Prints all single digit numbers of base 10
*starting from 0,
*followed by a new line,use the putchar
*Return: Always 0 (Succes)
*/
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
