#include "main.h"
/**
* print_triangle- function that prints a triangle
* @size: triangle size
* Return: 0
*/
void print_triangle(int size)
{
int i;
int j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for ( i = 1; i <= size; i++)
{
for (j = 0; j < i; j++)
{
_putchar('#');
}
}
}
_putchar('\n');
}
