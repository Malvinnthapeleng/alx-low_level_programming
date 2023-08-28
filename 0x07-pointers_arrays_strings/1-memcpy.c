#include "main.h"
/**
 * _memcpy- function that copies memory area.
 * @dest: destination of byte area
 * @src: source of bytes area
 * @n:number of bytes to be copied
 * Return:a pointer to desk
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
