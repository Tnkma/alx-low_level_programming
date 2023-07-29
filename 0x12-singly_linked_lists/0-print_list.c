#include "lists.h"

/**
 * print_list - prints the list of elements found
 * @h: pointing to the head
 * Return: Numbers of nodes found
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
			printf("[%d] %s%s", h->len, h->str, "\n");
		else
			printf("[%d] %s%s", 0, "(nil)", "\n");
		if (h->next)
		{
			return (print_list(h->next) + 1);
		}
		return (1);
	}
	return (0);
}
