#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - converts a binary number to unsigned int
* @b: string containing the binary number
*
* Return: the converted number, or 0 if there is an error
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_val = 0;
int i;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
/* Check if the character is '0' or '1' */
if (b[i] != '0' && b[i] != '1')
return (0);

/* Calculate the decimal value by shifting left and adding the binary digit */
dec_val = (dec_val << 1) | (b[i] - '0');
}

return (dec_val);
}
