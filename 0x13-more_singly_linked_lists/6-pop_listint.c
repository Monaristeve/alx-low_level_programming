#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the first node in a linked list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (number);
}
