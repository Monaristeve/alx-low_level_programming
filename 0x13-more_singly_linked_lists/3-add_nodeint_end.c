#include "lists.h"
/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: address to the first element
 * @n: new node to be added
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *recent;
	listint_t *t = *head;

	recent = malloc(sizeof(listint_t));
	if (!recent)
		return (NULL);
	recent->n = n;
	recent->next = NULL;
	if (*head == NULL)
	{
		*head = recent;
		return (recent);
	}
	while (t->next)
		t = t->next;
	t->next = recent;
	return (recent);
}
