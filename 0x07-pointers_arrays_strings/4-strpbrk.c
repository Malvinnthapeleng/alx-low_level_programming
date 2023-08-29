#include "main.h"
/**
 * _strpbrk -function that searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 * Return: a pointed to the matched byte,else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
