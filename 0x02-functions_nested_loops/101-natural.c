#include <stdio.h>
/**
*main- program that computes and prints the sum of all the multiples of 3 and 5
*Return: 0
*/

int main(void)
{
	int i, z = 0;

	while (i < 1028)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);

	return (0);
}
