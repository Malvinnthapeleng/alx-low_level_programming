#include <stdio.h>
/**
 * main - function to print alphabets in lower case
 * Return: 0 (Success)
 */

int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
	    putchar(letter);
	    letter++;
    }

    putchar('\n'); // Print a newline after printing the alphabet

    return 0;
}
