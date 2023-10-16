#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: half of this is to be printed
 * Return: void
 *
 */

void puts_half(char *str)
{
	int k, m, count = 0;

	for (k = 0 ; str[k] != '\0' ; k++)
		count++;
	m = (count - 1) / 2;
	for (k = m + 1 ; str[k] != '\0' ; k++)
		_putchar(str[k]);
	_putchar('\n');
}
