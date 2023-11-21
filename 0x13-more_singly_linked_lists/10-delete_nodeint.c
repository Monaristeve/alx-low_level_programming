#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at given
 * index of a linked list
 * @head: adress to the first node in list
 * @index: index where the deletion happens
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *present = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (j < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		j++;
	}
	present = t->next;
	t->next = present->next;
	free(present);
	return (1);
}
