#include <stdio.h>
/**
*main- program that computes and prints the sum of all the multiples of 3 and 5
*Return: (0)
*/

int main(void)
{
int i;
int sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
}
printf("%d\n", sum);

return (0);
}
