#include "main.h"
/**
 * print_times_table -function that prints the n times table, starting with 0
 * @n: number of time tables to be printed
 */
void print_times_table(int n)
{
	int num, multi, product;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (multi = 1; multi <= n; multi++)
			{
			_putchar(',');
			_putchar(' ');
			product = num * multi;
			if (product <= 99)
				_putchar(' ');
			if (product >= 100)
			{
				_putchar((product / 100) + 48);
				_putchar(((product / 10)) % +48);
			}
			else if (product <= 99 && product >= 10)
			{
				_putchar((product / 10) + 48);
			}
			_putchar((product % 10) + 48);
			}
		}
	}
}
