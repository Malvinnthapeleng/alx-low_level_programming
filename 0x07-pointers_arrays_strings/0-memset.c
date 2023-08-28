#include "main.h"
/**
 * _memset- function that fills memory with a constant byte.
 * @s: memomy area to be filled
 * @b: char to be copied
 * @n: number of times to copy b
 * Return: pointer to memomy area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
