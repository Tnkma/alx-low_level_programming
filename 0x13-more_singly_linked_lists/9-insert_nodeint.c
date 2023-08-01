#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a specific position
 * @head: the head node
 * @idx: the index of the lists
 * @n: the value to be inserted into the new node
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node;
	unsigned int i = 1;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		tmp = *head;
		while (i < idx)
		{
			tmp = tmp->next;
			i++;
		}
		if (new_node == NULL)
		{
			return (NULL);
		}
		else
		{
		new_node->n = n;
		new_node->next = tmp->next;
		tmp->next = new_node;
		}
		return (new_node);
	}
}




