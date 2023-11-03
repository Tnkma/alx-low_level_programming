#include "hash_tables.h"

/**
 * hash_table_create - creates the hash function
 * @size: the size of the array
 *
 * Return: the created function
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	new_hash_table = malloc(sizeof(hash_table_t));
	/** check if memory allocation is successful */
	if (!new_hash_table)
	{
		return (NULL);
	}
	/** assign the new list the size of the array */
	new_hash_table->size = size;
	/** allocate memory for the array to point to the next list */
	new_hash_table->array = malloc(sizeof(hash_node_t) * size);
	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		/** we set each of the array to NULL */
		new_hash_table->array[i] = NULL;
	}

	/** we will have to return a  pointer to the created new_hash_table */
	return (new_hash_table);
}
