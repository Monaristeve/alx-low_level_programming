#include "main.h"
#include "stdio.h"

/**
 * puts2 -  a function that prints every other character of a string
 * @str: sting whose characters are printed
 * Return: void
 *
 */

void puts2(char *str)
{
	int h;

	for (h = 0 ; str[h] != '\0' ; h++)
	{
		if (h % 2 == 0)
			_putchar(str[h]);
	}
	putchar('\n');
}
