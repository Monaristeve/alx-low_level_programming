#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list 
 * @head: node at the beggining of a list
 * @index: index of the node,starting 0
 * Return: pointer to the node if it exists,if it doesnt exist return Null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *t = head;

	while (t && j < index)
	{
		t = t->next;
		j++;
	}
	return (t ? t : NULL);
}
