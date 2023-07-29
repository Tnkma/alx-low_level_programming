#include "lists.h"

/**
 * free_list - free the memory allocated to head
 * @head: the head to be freed
 *
 * Return: Always void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
