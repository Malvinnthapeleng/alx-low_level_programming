#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion- returns the natural square root
 * of a number
 * actual_sqrt_recursion- recur to find the natural root
 * @n: number to calculate the square root
 * Return: resulting of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
	/**
	 * actual_sqrt_recursion - recurses to find the natural
	 * square root of a number
	 * @n: calculates square root
	 * @i: iterator
	 * Return: resulting square root
	 */
	int actual_sqrt_recursion(int n, int i)
	{
		if (i * i > n)
		{
			return (-1);
		}
		else
			if (i * i == n)
			{
				return (i);
			}
			else
			{
				return (actual_sqrt_recursion(n, i + 1));
			}
	}		}
