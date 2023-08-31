#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at an index
 * @n: the number
 * @index: the index to set n
 *
 *
 * Return: 1 if it worked or -1 else
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	mask = ~(1 << index);
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = (*n & mask);
		return (1);
	}
}

