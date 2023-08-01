#include "lists.h"

/**
 * sum_listint - sums up the data in the linked list
 * @head: the node head
 *
 * Return: the sum of the nodes
 */

int sum_listint(listint_t *head)
{
	listint_t *sume;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	sume = head;

	while (sume != NULL)
	{
		sum += sume->n;
		sume = sume->next;
	}
	return (sum);
}
