#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string  added to the end of the file.
 * Return: If the function fails or filename is NULL return -1.
 *         If the file does not exist the user lacks write permissions return  -1.
 *         otherwise return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
