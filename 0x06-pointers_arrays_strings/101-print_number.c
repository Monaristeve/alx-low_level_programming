#include "main.h"

/**
 * print_number -  a function that prints an integer.
 *@n: integer
 *Return: 0
 */

void print_number(int n)
{
	unsigned int m1;

	m1 = n;

	if (n < 0)
	{
		_putchar('-');
		m1 = -n;
	}

	if (m1 / 10 != 0)
	{
		print_number(m1 / 10);
	}
	_putchar((m1 % 10) + '0');
}
