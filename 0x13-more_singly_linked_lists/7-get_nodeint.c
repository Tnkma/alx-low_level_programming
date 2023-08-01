#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: the node head
 * @index: index of the node
 *
 * Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n_term = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (n_term < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		n_term++;
	}
	return (head);
}
