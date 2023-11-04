#include "hash_tables.h"

/**
 * hash_table_get - retrieves the data from the hash table ht
 * @ht: the hash table to get data from
 * @key: the placeholder for the value
 * the key_index function uses the djb2 algorithm to get the indx.
 *
 * Return: return the value of NUll if key does not exit
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *head;

	indx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[indx];

	while (head != NULL)
	{
		/** while head pointer is not NULL */
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	/** if we cant find the key, return NULL */
	return (NULL);
}
