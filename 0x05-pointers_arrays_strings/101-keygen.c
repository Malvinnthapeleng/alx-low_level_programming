#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random passwards for 101-keygen
 * Return: 0
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;

	while (sum <= 2645)
	{
		c = rand() % 128;
		sum = sum + c;
		putchar(c);
	}
	putchar(2772 - sum);

	return (0);
}
