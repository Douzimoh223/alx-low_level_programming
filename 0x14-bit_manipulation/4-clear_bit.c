#include "main.h"
/**
 * clear_bit -  a function that sets the value
 * of a bit to 0 at a given index
 * @n: value of bit to 0  at given index
 * @index:pointer value of a bit
 * Return:1 if it worked, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= ~(1ul << index);
return (1);
}
