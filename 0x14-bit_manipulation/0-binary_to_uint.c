#include "main.h"
/**
 * binary_to_uint -  a function that converts,
 * a binary number to an unsigned int
 * @b: is pointer string and chars to convert
 * a binary number
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int result  = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
result = 2 * result + (b[i] - '0');
}
return (result);
}
