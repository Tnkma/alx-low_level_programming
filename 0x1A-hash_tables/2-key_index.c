#include "hash_tables.h"

/**
 * key_index - receives the key and gets the index using the djba2 algotrthm
 * @key: the key received
 * @size: the size of the array
 *
 * Return: the index at which the key/value should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
	{
		return (0);
	}
	if (size <= 0)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
