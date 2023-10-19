#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: the source string
 * @n: byte number thats being concatenated
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int s;

	for (s = 0 ; s < n && *src != '\0' ; s++)
	{
		dest[length + s] = *src;
		src++;
	}
	dest[length + s] = '\0';
	return (dest);
}
