#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: no return
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n + '0');

	}
	_putchar('\n');
}
