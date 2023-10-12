#include "lists.h"

/**
 * add_dnodeint - adds the node at the beginning
 * @head: the head of the node
 * @n: the variable contenting the data for the node
 *
 * Return:the address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *h;


	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	/* set the prev pointer to NULL */
	newnode->prev = NULL;
	/*set the next pointer to the NULL */
	newnode->n = n;
	newnode->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	/* set the head prev pointer to point to newnode */
	newnode->next = h;
	/*if it fails return null */
	if (h != NULL)
	{
		h->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}


