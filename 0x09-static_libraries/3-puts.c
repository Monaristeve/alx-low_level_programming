#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 * @str: this is the string to be printed
 * Return: void
 *
 */

void _puts(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0' ; j++)
		_putchar(str[j]);
	_putchar('\n');
}
