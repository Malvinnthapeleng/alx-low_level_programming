#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* read_textfile - Read text file and print to STDOUT.
* @filename: Text file being read.
* @letters: Number of letters to be read.
*
* Return: Actual number of bytes read and printed, 0 when function fails,
* or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (!buf)
{
close(fd);
return (0);
}

t = read(fd, buf, letters);
if (t == -1)
{
free(buf);
close(fd);
return (0);
}

w = write(STDOUT_FILENO, buf, t);
if (w == -1)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (w);
}

