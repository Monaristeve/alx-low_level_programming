#include "lists.h"
/**
 * listint_len - function returning number of elements in a linked list
 * @h: the linked list to be checked
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
