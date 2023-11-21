#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the start  of linked list
 * @head: pointer to the first node
 * @n: nodes to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
