#include "lists.h"

/**
 * free_listint2 - free listin_t
 * @head: the node head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *add;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		add = (*head)->next;
		free(*head);
		*head = add;
	}
}
