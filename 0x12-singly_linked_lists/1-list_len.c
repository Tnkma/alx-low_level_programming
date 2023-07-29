#include "lists.h"

/**
 * list_len - prints the number of elements
 * @h: points to the head
 *
 * Return: Always 0 for success
 */

size_t list_len(const list_t *h)
{

	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}

	return (m);
}
