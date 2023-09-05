#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- function that creates an array of chars
 * @size: size of the array in int
 * @c: store string of characters
 * Return: a pointer to the base character c
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
