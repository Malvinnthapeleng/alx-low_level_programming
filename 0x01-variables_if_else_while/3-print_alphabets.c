#include <stdio.h>
#include <ctype.h>
/**
 * main -  function to print alphabets in lowercase and uppercase
 * Return: (0) (Success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
