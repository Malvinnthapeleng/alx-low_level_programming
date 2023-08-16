#include "main.h"
/**
 *print_alphabet_x10-  function that prints 10 times the alphabet, in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
