#include "main.h"

/**
 * _isupper - program entry point
 * main - a function that checks for uppercase character
 *@c:paremeter for an integer
 * Return: 1 if c is uppercase otherwise return 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
