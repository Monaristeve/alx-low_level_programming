#include <stdlib.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked
 * @h: pointer to the list
 * Return: number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}

