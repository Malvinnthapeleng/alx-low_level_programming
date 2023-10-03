#include "main.h"

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int i;
unsigned long int mask = 1UL << 63;

if (n == 0)
{
_putchar('0');
return;
}

for (i = 0; i < 64; i++)
{
if ((n & mask) != 0)
_putchar('1');
else
_putchar('0');

mask >>= 1;
}
}
