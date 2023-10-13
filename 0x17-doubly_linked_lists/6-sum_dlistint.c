#include "lists.h"

/**
 * sum_dlistint - sums the values of the nodes
 * @head: the head of the node
 *
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *each_node = head;
	int sum = 0;

	while (each_node != NULL)
	{
		sum += each_node->n;
		each_node = each_node->next;
	}
	return (sum);
}
