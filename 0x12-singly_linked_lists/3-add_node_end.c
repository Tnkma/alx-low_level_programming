#include "lists.h"

/**
 * add_node_end - Puts a new node to list_t end
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: Always 0 if success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = dup;
	new->length = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
