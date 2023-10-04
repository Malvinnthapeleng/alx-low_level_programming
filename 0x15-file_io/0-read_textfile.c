#include "main.h"
#include <stdio.h>  /* Include stdio.h for perror */
#include <stdlib.h> /* Include stdlib.h for memory management */
/**
* read_textfile - Read text file and print to STDOUT.
* @filename: Name of the text file to read.
* @letters: Number of letters to be read.
* Return: Number of bytes read and printed on success, 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;        /* File descriptor */
ssize_t bytes; /* Number of bytes read and printed */
char *buf;     /* Buffer to store read data */

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
return (0);
}

buf = malloc(sizeof(char) * letters);
if (!buf)
{
close(fd); /* Close the file before returning */
perror("Memory allocation error");
return (0);
}

bytes = read(fd, buf, letters);
if (bytes == -1)
{
perror("Error reading file");
free(buf);  /* Free allocated memory before returning */
close(fd);  /* Close the file before returning */
return (0);
}
if (write(STDOUT_FILENO, buf, bytes) == -1)
{
perror("Error writing to STDOUT");
free(buf);  /* Free allocated memory before returning */
close(fd);  /* Close the file before returning */
return (0);
}
free(buf);
close(fd);
return (bytes);
}
