#include "main.h"
/**
* _isdigit -  function that checks for a digit
* @c: input to be computed
* Return: 1 if its a number. 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
