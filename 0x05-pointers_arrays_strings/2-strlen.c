#include "main.h"
/**
 * _strlen -  function that returns the length of a string.
 * @s: to store string length
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int string_count = 0;

	for (i = 0; s[i] != '\0'; i++)
		string_count++;
	return (string_count);
}
