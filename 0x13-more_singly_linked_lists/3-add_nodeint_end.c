#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the list
 * @head: the head node
 * @n: the node number
 *
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *last;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->n = n;
	add->next = NULL;

	if (*head != NULL)
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = add;
	}
	else
	{
		*head = add;
	}
	return (add);
}

