#include "main.h"
/**
 * reverse_array- function that reverses the content of an array of integers.
 * @a: pointer to an array
 * @n: number of elements in an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
