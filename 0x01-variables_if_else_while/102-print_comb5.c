#include <stdio.h>
#include <stdbool.h>
/**
 * main - function to print  all possible combinations of two two-digit numbers
 * Return: (0) (Success)
 *@num: The number to print
 */



int main(void)
{
        int i, j;

        for (i = 0; i < 100; i++)
        {
            for (j = i + 1; j < 100; j++)
            if (i != j)
            {
            printf("%02d %02d", i, j);
            if (i !=98 || j !=99)
            {
            printf(", ");
            }
            }
        }
        putchar('\n');

        return (0);
}
