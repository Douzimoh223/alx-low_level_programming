#include "main.h"
/**
 * flip_bits -  a function that returns the number
 * of bits you would need to flip
 * to get from one number to another
 * @m:  number get from flip
 * @n: the he number of bits would need to flip
 * @xoy the two numbers to get a number with
 * all differing bits set to 1
 * @count the number of set bits in the xoy
 * result using bit shifting
 * Return: value of count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xoy = n ^ m;
unsigned int count = 0;
while (xoy != 0)
{
count += xoy & 1;
xoy >>= 1;
}
return (count);
}
