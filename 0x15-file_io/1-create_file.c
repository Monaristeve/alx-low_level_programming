#include "main.h"
/**
 * create_file -  a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, x, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(i, text_content, length);
	if (i == -1 || x == -1)
		return (-1);
	close(i);
	return (1);
}
