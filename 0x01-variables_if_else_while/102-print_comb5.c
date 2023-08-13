#include <stdio.h>
#include <stdbool.h>
/**
 * main - function to print  all possible combinations of two two-digit numbers
 * Return: (0) (Success)
 *@num: The number to print
 */

void printTwoDigitNumber(int num)
{
	putchar('0' + num / 10);
	putchar('0' + num % 10);
}

int main(void)
{
	int i, j;

	for (i = 0; i < 100; ++i)
	{
		for (j = i; j < 100; ++j)
		{
			printTwoDigitNumber(i);
			putchar(' ');
			printTwoDigitNumber(j);

			if (j != 99 || i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
