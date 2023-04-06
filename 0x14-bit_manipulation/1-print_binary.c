#include "main.h"
/**
 * print_binary -  a function that prints
 * the binary representation of a number
 * @n :pointer of print the binary
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
printf("%lu", n & 1);
}
