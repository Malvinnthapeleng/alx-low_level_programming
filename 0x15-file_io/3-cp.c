#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* open_src_file - Opens the source file.
* @src_filename: The name of the source file.
*
* Return: The file descriptor of the opened file.
*/
int open_src_file(const char *src_filename)
{
int src_fd;

src_fd = open(src_filename, O_RDONLY);
if (src_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
exit(98);
}

return (src_fd);
}

/**
* open_dest_file - Opens or creates the destination file.
* @dest_filename: The name of the destination file.
*
* Return: The file descriptor of the opened file.
*/
int open_dest_file(const char *dest_filename)
{
int dest_fd;

dest_fd = open(dest_filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
exit(99);
}

return (dest_fd);
}

/**
* copy_file - Copies data from source file to destination file.
* @src_fd: The file descriptor of the source file.
* @dest_fd: The file descriptor of the destination file.
*/
void copy_file(int src_fd, int dest_fd)
{
ssize_t r_bytes, w_bytes;
char buffer[1024];

do {
r_bytes = read(src_fd, buffer, 1024);
if (r_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
exit(98);
}

w_bytes = write(dest_fd, buffer, r_bytes);
if (w_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
exit(99);
}

} while (r_bytes > 0);
}

/**
* close_file - Closes a file descriptor.
* @fd: The file descriptor to close.
*/
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
exit(100);
}
}

/**
* main - Copies the contents of one file to another.
* @argc: The number of arguments (should be 3).
* @argv: An array of strings containing the program name and file names.
*
* Return: 0 on success, or exit with error code on failure.
*/
int main(int argc, char *argv[])
{
int src_fd, dest_fd;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

src_fd = open_src_file(argv[1]);
dest_fd = open_dest_file(argv[2]);

copy_file(src_fd, dest_fd);

close_file(src_fd);
close_file(dest_fd);

return (0);
}
