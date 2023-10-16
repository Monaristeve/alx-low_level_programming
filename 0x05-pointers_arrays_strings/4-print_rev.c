#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be printed in reverse
 * Return: void
 *
 */

void print_rev(char *s)
{
	int b;
	int count = 0;

	for (b = 0 ; s[b] != '\0' ; b++)
		count++;
	for (b = count - 1 ; b >= 0 ; b--)
		_putchar(s[b]);
	_putchar('\n');
}
