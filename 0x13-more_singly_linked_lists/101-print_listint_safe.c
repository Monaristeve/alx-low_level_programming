#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - function that counts the number of unique nodes in a
 * linked list
 * @head: adress to first node in a linked list
 * Return: 0 if the list isnt looped, or else number of unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t s = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	a = head->next;
	b = (head->next)->next;
	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				s++;
				a = a->next;
				b = b->next;
			}
			a = a->next;
			while (a != b)
			{
				s++;
				a = a->next;
			}
			return (s);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - a function that prints a linked list
 * @head: ddress to the first node in linked list
 * Return: number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t s, index = 0;

	s = looped_listint_len(head);

	if (s == 0)
	{
		for (; head != NULL; s++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < s; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (s);
}
