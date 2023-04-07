#include "main.h"
/**
 * get_bit -  a function that returns the value of
 * a bit at a given index.
 * @index: is out of bounds
 * @n: pointer of  get_bit
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
