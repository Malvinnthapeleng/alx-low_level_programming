#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
int from, to, r, w;
char buffer[1024]; /* Use a fixed-size buffer */

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); /* Exit with error code 97 for incorrect arguments */
}
from = open(argv[1], O_RDONLY);
if (from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); /* Exit with error code 98 for file read error */
}
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99); /* Exit with error code 99 for file write error */
}
while ((r = read(from, buffer, 1024)) > 0)
{
w = write(to, buffer, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99); /* Exit with error code 99 for file write error */
}
}

if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); /* Exit with error code 98 for file read error */
}
close(from);
close(to);

return (0);
}
