#include "lists.h"

/**
 * delete_nodeint_at_index - delteds node at index
 * @head: the node head
 * @index: index to delete
 *
 * Return: returns 1 if successful and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *delete;
	unsigned int m = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (m < index - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (-1);
		}
		m++;
	}
	delete = tmp->next;
	tmp->next = delete->next;
	free(delete);
	return (1);
}

