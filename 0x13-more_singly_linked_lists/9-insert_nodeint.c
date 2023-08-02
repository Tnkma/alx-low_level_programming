#include "lists.h"

/**
 * get_count - counts the number of nodes
 * @head: the node head
 *
 * Return: the count of the nodes
 */

int get_count(listint_t *head)
{
	listint_t *to_count;
	int count = 0;

	if (head == NULL)
	{
		return (-1);
	}
	to_count = head;
	while (to_count != NULL)
	{
		to_count = to_count->next;
		count++;
	}
	return (count);
}

/**
 * insert_nodeint_at_index - inserts nodeint at idx
 * @head: the head node
 * @idx: the index
 * @n: the value for the new node
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node;
	unsigned int count, i = 1;

	count = get_count(*head);
	if (*head == NULL)
	{
		return (NULL); }

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL); }
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else if (idx > count)
	{
		exit(9); }
	else
	{
		tmp = *head;
		while (i < idx && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL); }
		new_node->n = n;
		new_node->next = tmp->next;
		tmp->next = new_node;
		return (new_node);
	}
}
