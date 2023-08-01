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

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
