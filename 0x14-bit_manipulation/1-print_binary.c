#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int j, add = 0;
	unsigned long int present;

	for (j = 63; j >= 0; j--)
	{
		present = n >> j;
		if (present & 1)
		{
			_putchar('1');
			add++;
		}
		else if (add)
			_putchar('0');
	}
	if (!add)
		_putchar('0');
}
