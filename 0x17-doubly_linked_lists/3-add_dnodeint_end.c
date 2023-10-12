#include "lists.h"

/**
 * add_dnodeint_end - adds the node at the end
 * @head: the head node
 * @n: contains the data
 *
 * Return: the new element or NULL id it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endnode, *h;

	endnode = malloc(sizeof(dlistint_t));
	if (endnode == NULL)
	{
		return (NULL);
	}
	endnode->n = n;
	endnode->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = endnode;
	}
	else
	{
		*head = endnode;
	}
	endnode->prev = h;
	return (endnode);
}
