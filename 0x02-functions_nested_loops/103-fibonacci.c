#include <stdio.h>
/**
 * main - program that finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	long int i, x = 1, y = 2, sum = 0, totalsum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			totalsum = totalsum + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
			printf("%ld\n", totalsum);

			return (0);

}
