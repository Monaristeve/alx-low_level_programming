#include "main.h"

/**
  * _memcpy - a function that copies memory area.
  * @src: Source variable
  * @dest: Destination variable
  * @n: integer parameter
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}

