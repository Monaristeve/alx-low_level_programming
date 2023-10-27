#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - a function that copies the string pointed to by src
 * , including the terminating null byte (\0)
 * , to the buffer pointed to by dest
 *
 * @src: string to be copied
 * @dest:  the buffer pointed to
 *
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0 ; src[s] != '\0' ; s++)
		dest[s] = src[s];
	dest[s] = '\0';
	return (dest);
}
