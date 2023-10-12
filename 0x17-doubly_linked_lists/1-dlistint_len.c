#include "lists.h"

/**
 * dlistint_len - length of the elements in a node
 * @h: the node list
 *
 * Return: the count of the node
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
