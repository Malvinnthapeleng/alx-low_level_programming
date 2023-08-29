#include "main.h"
/**
 * _strstr- function that locates a substring
 * @haystack: string to be searched
 * @needle:substring to be located
 * Return: a pointer the the beginning of the located substring,else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (NULL);
}
