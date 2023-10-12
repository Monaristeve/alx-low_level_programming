#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: the number to have a sign printed
 *
 * Return: 1,0 and -1
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
