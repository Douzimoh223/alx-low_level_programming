#include <stdio.h>

int main(void)
{
int n = 10;
if (n > 0)/* Condition = n is positive */
{
printf("is positive: %d\n", n);
}
if (n == 0)/* Condition = True  n is zero */
{
printf("is zero: %d\n", n);
}
if (n > 0)/* Bool is True n is negative */
{
printf("is negative: %d\n", n);
}
return (0);
}
