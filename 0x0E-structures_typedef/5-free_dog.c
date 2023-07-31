#include "dog.h"

/**
 * free_dog - frees memory allocated to dog
 * @d: the location of the memory
 *
 * Return: Always 0 for success
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
