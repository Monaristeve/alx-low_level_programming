#include "main.h"
/**
* _calloc -  a function that allocates memory for an array, using malloc
* @size: array size in bytes
* @nmemb: elements in array
* Return: pointer to allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int y;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;
	return (x);
}
