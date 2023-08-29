#include "main.h"
#include <string.h>
/**
 * _strchr- function that locates a character in a string.
 * @s:string to be searched
 * @c:character to be located
 * Return: a pointer to s if c is found,NULL if c not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
