#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts the node at an index
 * @h: the head
 * @idx: the index number
 * @n: the data of the node
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *head, *newnode = NULL;

	head = *h;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
	}
	else
	{
		if (head != NULL)
			while (head->prev != NULL)
			{
				head = head->prev;
			}
		while (head != NULL)
		{
			if (count == idx)
			{
				if (head->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
						newnode->n = n;
						newnode->next = head->next;
						newnode->prev = head;
						head->next->prev = newnode;
						head->next = newnode;
				}
				break;
			}
			head = head->next;
			count++;
		}
	}
	return (newnode);
}
