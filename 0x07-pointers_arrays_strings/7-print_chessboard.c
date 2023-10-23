#include "main.h"

/**
  * print_chessboard - a function that prints the chessboard.
  * @a: parameter to the function
  * Return: 0
  */

void print_chessboard(char (*a)[8])
{
	int e;
	int b;

	for (e = 0; e < 8; e++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[e][b]);
		_putchar('\n');
	}
}
