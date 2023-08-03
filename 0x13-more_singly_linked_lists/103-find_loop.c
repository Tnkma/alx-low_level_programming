#include "lists.h"

/**
 * find_listint_loop - finds the loop in the lists
 * @head: the head node
 *
 * Return: the address where the loop occurred
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			listint_t *start = head;

			while (start != slow)
			{
				start = start->next;
				slow = slow->next;
			}
			return (start);
		}
	}
	return (NULL);
}
