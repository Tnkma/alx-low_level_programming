#include "lists.h"

/**
 * listint_len - prints the length of the element
 * @h: the head of the node
 *
 * Return: the count of the node
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
