#include "main.h"
/**
 * print_binary -  a function that prints
 * the binary representation of a number
 * @n :pointer of print the binary
 */
void print_binary(unsigned long int n)
{
int i, x = 0;
unsigned long int result;
for (i = 63; i >= 0; i--)
{
result = n >> i;

if (result & 1)
{
_putchar('1');
x++;
}
else if (x)
_putchar('0');
}
if (!x)
_putchar('0');
}
