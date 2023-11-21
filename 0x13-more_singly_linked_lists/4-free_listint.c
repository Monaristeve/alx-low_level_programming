#include "lists.h"
/**
 * free_listint - a function that frees a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *t;
	
	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
