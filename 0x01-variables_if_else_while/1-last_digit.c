#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Entry pointe */

/* Return: Always 0 (Success) */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 printf("The number %d, followed by\n", n);

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }
	return (0);
}
