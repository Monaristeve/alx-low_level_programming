#include "main.h"

/**
 * jack_bauer -the programmes entry point
 *
 * main - function that prints every minute of Jack Bauers day
 *
 *  Return: 0
 *
 */


void jack_bauer(void)
{
	int x, y, m, p;


	for (x = 0; x <= 2; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	if ((x <= 1 && y <= 9) || (x <= 2 && y <= 3))
	{
	for (m = 0; m <= 5; m++)
	{
	for (p = 0; p <= 9; p++)
	{
	_putchar(x + '0');
	_putchar(y + '0');
	_putchar(58);
	_putchar(m + '0');
	_putchar(p + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
