#include "lists.h"

/**
 * print_dlistint - function that prints all the elemnent of the list
 * @h: the list to print
 *
 * Return: Returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
