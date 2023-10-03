#include "main.h"

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << 63;
int leading_zeros = 0;

if (n == 0)
{
_putchar('0');
return;
}

while (mask)
{
if (n & mask)
{
leading_zeros = 1;
_putchar('1');
}
else if (leading_zeros)
{
_putchar('0');
}
mask >>= 1;
}
}
