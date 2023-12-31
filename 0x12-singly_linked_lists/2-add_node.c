#include "lists.h"

/**
 * add_node - Add a new node to the beginning
 * @head: A pointer to the head of the list_t list.
 * @str: A string to be added to the list_t list.
 *
 * Return: The address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *fin;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	fin = strdup(str);
	if (fin == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = fin;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
