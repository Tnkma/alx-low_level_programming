#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: the node head
 *
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *before, *after;


	if (head == NULL)
	{
		exit(98);
	}

	before = head;
	after = head;

	for (count = 0; after != NULL && before->next != NULL; count++)
	{
		printf("[%p] %d\n", (void *)before, before->n);
		before = before->next;
		after = after->next->next;

		if (before == after)
		{
			printf("[%p] %d\n", (void *)before, before->n);
			return (count);
		}
	}
	while (before != NULL)
	{
		printf("[%p] %d\n", (void *)before, before->n);
		count++;
		before = before->next;
	}
	return (count);
}
