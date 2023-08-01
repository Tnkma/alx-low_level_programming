#include "lists.h"

/**
 * free_listint - frees alocated memory
 * @head: the node head
 *
 */

void free_listint(listint_t *head)
{
	listint_t *add;

	while (head != NULL)
	{
		add = head;
		head = head->next;
		free(add);
	}
}
