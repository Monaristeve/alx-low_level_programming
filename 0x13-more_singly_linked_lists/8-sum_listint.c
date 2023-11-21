#include "lists.h"
/**
 * sum_listint - a function returning the sum of all the data in a linked list
 * @head: node at the beginning of the linked list
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *t = head;

	while (t)
	{
		total += t->n;
		t = t->next;
	}
	return (total);
}
