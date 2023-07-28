#include "lists.h"

/**
 * list_len - program to prints the number of elements found in a list
 * @list_t: holds the nodes
 * @h: points to the head
 *
 * return: Always 0 for success
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
