#include "main.h"
/**
 * _strncat- function that concatenates two strings.
 * @dest: input string
 * @src: input string
 * @n: input string
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}

