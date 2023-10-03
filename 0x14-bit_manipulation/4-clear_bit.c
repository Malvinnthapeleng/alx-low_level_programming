#include "main.h"

/**
* clear_bit - sets the value of a given bit to 0
* @n: pointer to the number to change
* @index: index of the bit to clear
*
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Declare variables at the beginning of the function */
unsigned long int bitmask;

/* Check if the index is out of range */
if (index > 63)
return (-1);

/* Create a bitmask with a 0 at the specified index and 1s elsewhere */
bitmask = 1UL << index;

/* Invert the bitmask to have 0s at the specified index and 1s elsewhere */
bitmask = ~bitmask;

/* Perform a bitwise AND to clear the bit at the specified index */
*n = (*n & bitmask);

/* Return 1 to indicate success */
return (1);
}
