#include "lists.h"

/**
 * free_dlistint - frees all memory allocated
 * @head: the head of the list
 *
 * Return: oid since were void
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		return;
	}
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
