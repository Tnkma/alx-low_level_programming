#include "main.h"

/**
 * set_bit - set the value of bit to 1 at a given index
 * @n: number to be set
 * @index: the index at whic the number will be set
 *
 * Return: 1 if it worked or 0 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		bit = bit << index;
		*n = (*n | bit);
		return (1);
	}
}
