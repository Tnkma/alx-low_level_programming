#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the varibale to allocate memory to
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
