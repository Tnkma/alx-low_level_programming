#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a list
 * @head: the head of the node
 * @index: the index to get the node
 *
 * Return: Null if the node does not exit
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int count = 0;


	while (current_node != NULL)
	{
		if (count == index)
		{
			/* if the count is same as the provided index*/
			/* return the value at there*/
			return (current_node);
		}
		count++;
		current_node = current_node->next;
	}
	return (NULL);
}
