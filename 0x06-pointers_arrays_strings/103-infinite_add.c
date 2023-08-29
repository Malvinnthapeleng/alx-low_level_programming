#include "main.h"
/**
*infinite_add- function that adds two numbers
*print_buffer- function that prints a buffer.
*@n1: first number as input
*@n2: second number as input
*@r: buffer that the function will use to store the result
*@size_r: buffer size
*Return: 0 If the result can not be stored in r,else 1
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0, i = 0, j = 0, digit = 0;
int value1 = 0, value2 = 0, temp_total = 0;

while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;

i--;
j--;
if (i >= size_r || j >= size_r)
return (0);
while (i >= 0 || j >= 0 || overflow == 1)
{
if (i < 0)
value1 = 0;
else
value1 = *(n1 + i) -48;
if (j < 0)
value2 = 0;
else
value2 *(n2 + j) - 48;
temp_total = value1 + value2 + overflow;
if (temp_total >= 10)
overflow = 1;
else
overflow = 0;
if (digit >= (size_r - 1))
return (0);
*(r + digit) = (temp_total % 10) + 48;
digit++;
j--;
i--;
}
if (digit == size_r)
return (0);
*(r + digit) = '\0';
rev_string(r);
return (r);
}
