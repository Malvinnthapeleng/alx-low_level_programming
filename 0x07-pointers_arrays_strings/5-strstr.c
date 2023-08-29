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
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return('\0');
}
