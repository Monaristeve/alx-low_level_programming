#include "main.h"
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated
* @old_size:is the size of the allocated space for ptr in bytes
* @new_size: the new size in bytes
* Return: pointer allocate new size memory, or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j, m = new_size;
	char *s = ptr;
	char *k;

	if (ptr == NULL)
	{
		k = malloc(new_size);
		return (k);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	k = malloc(new_size);
	if (k == NULL)
		return (NULL);
	if (new_size > old_size)
		m = old_size;
	for (j = 0; j < m; j++)
		k[j] = s[j];
	free(ptr);
	return (k);
}
