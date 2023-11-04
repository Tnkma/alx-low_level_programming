#include "hash_tables.h"
/**
 * hash_table_set - adds a new element to the hash table
 * @ht: the hash_table
 * @key: the key
 * @value: the value to store
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *fix_collision, *new_link;
	unsigned long int index;

	if (!key || !ht)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	/** create a new node */
	new_link = malloc(sizeof(hash_node_t));
	if (!new_link)
	{
		return (0);
	}
	new_link->key = strdup(key);
	new_link->value = strdup(value);
	new_link->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_link;
	}
	else
	{
		/** if collision happens then fix it */
		fix_collision = ht->array[index];
		while (fix_collision->next != NULL)
		{
			/** move the pointer to the next node in the list */
			fix_collision = fix_collision->next;
		}
		fix_collision->next = new_link;
	}
	return (1);
}

