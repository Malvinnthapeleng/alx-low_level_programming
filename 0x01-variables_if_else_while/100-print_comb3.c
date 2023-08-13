#include <stdio.h>
/**
 * main - function
 * Return: (0) (Success)
 */

int main(void)
{
	int one = 0;
	int ten = 0;

	for (ten = 0; ten <= 9; ten++)
	{
		for (one = 0; one <= 9; one++)
		{
			if (!((one == ten) || (ten > one)))
			{
				putchar("%d%d", one, ten);
				if (!((one == 9) && (ten == '8')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
