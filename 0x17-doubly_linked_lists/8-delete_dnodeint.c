#include "lists.h"
/**
 * del - delete node
 * @head: the node head
 * @po: pointer to the node to be deleted
 *
 * Return: void since were void
 */
void del(dlistint_t **head, dlistint_t *po)
{
	if (*head == NULL || po == NULL)
		return;
	if (*head == po)
		*head = po->next;
	if (po->next != NULL)
		po->next->prev = po->prev;
	if (po->prev != NULL)
		po->prev->next = po->next;

	free(po);
}
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: the head node
 * index: the index to deleye
 *
 * Return: 1 if successful and -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count;


	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		del(head, current);
	}
	for (count = 1; current != NULL && count <= index; count++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	del(head, current);
	return (1);
}
