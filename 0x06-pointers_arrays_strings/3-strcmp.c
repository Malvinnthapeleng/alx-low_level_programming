#include "main.h"
/**
* _strcmp- function that compares two strings.
* @s1:first srting to be compared
* @s2: second string to be compared
* Return: integer
*/

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
if (s1[i] < s2[i])
return (s1[i] - s2[i]);
else if (s1[i] > s2[i])
return (s1[i] - s2[i]);
}
}
return (0);
}
