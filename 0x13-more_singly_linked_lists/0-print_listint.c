#include "lists.h"

/**
 * print_listint - prints the elements of a string
 * @h: the head of the node
 *
 * Return: the number of node
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
			count++;
		}
		if (h->next)
		{
			return (1 + print_listint(h->next));
		}
	}
	return (count);
}
