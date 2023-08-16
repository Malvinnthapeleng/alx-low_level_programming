#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n:dispays the integer number
 * Return: last number
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
	{
		_putchar(-lastdigit + 48);
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + 48);
		return (lastdigit);
	}
	_putchar('\n');
}
