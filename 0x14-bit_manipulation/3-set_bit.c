#include "main.h"
/**
 * set_bit - a function that sets the value
 * of a bit to 1 at a given index
 * @index: pointer of value of the bit
 * @n:value of the bit at a given index
 * Return: 1 if it worked, or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= (1ul << index);
return (1);
}
