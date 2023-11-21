#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position
 * @head: adress of the first node in the linked list
 * @idx: index where the new node is to be appended
 * @n: elements to be inserted to the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *recent;
	listint_t *t = *head;

	recent = malloc(sizeof(listint_t));
	if (!recent || !head)
		return (NULL);
	recent->n = n;
	recent->next = NULL;
	if (idx == 0)
	{
		recent->next = *head;
		*head = recent;
		return (recent);
	}
	for (j = 0; t && j < idx; j++)
	{
		if (j == idx - 1)
		{
			recent->next = t->next;
			t->next = recent;
			return (recent);
		}
		else
			t = t->next;
	}
	return (NULL);
}
