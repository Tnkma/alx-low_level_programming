#include "lists.h"

/**
 * pop_listint - deletes the head node and return the data
 * @head: the node head
 *
 * Return: the data of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	unsigned int rem;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		rem = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (rem);
}
