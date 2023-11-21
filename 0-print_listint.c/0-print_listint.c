#include "lists.h"
/**
 * print_listint - the function prints all the elements of a linked list
 * @h: the linked list to be printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
