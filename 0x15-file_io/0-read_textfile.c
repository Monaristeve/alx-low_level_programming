#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: text file being parsed
 * @letters: the number of letters it should read and print
 * Return: actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t s;
	ssize_t x;
	ssize_t y;

	s = open(filename, O_RDONLY);
	if (s == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	y = read(s, c, letters);
	x = write(STDOUT_FILENO, c, y);
	free(c);
	close(s);
	return (x);
}
