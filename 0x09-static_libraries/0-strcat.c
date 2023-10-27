#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int srclength = 0;
	int destlength = 0;
	int k;

	for (k = 0 ; src[k] != '\0' ; k++)
		srclength++;
	for (k = 0 ; dest[k] != '\0' ; k++)
		destlength++;

	for (k = 0 ; k <= srclength ; k++)
		dest[destlength + k] = src[k];

	return (dest);
}
