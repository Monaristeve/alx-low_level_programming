#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 *
 * @n: the string input for the function
 *
 * Return: dest
 */

char *string_toupper(char *n)
{
	int k;

	k = 0;
	while (n[k] != '\0')
	{
		if (n[k] >= 'a' && n[k] <= 'z')
			n[k] = n[k] - 32;
		k++;
	}
	return (n);
}

