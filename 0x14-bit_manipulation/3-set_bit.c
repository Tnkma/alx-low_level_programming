#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at an index
 * @n: the number
 * @index: the index to set
 *
 * Return: 1 if it worked and -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/*create a mask*/
	int mask;

	mask = 1 << index;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = (*n | mask);
		return (1);
	}
}
