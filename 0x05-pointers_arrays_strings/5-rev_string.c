#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 *
 * Return: void
 *
 */

void rev_string(char *s)
{
	int k;
	int count = 0;

	for (k = 0 ; s[k] != '\0'; k++)
		count++;
	for (k = 0 ; k < count / 2 ; k++)
	{
		char m;

		m = s[k];
		s[k] = s[count - 1 - k];
		s[count - 1 - k] = m;
	}
}
