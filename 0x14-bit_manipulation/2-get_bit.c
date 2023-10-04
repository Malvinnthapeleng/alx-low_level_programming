#include "main.h"

/**
* get_bit - returns the value of a bit at a specific index in a decimal number
* @n: number to search
* @index: index of the bit to retrieve (0-based)
*
* Return: value of the bit at the given index, or -1 if index is out of range
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

/* Check if the provided index is valid (0 to 63) */
if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}