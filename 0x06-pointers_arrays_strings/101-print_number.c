#include "main.h"
/**
 * print_number- function that prints an integer
 * @n: input integer parameter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + 48);
}
