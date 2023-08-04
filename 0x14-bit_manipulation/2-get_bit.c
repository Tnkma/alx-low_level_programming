#include "main.h"

/**
 * get_bit - gets bit at a given index
 * @n: the number os bits
 * @index: the index at which to return bit
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	bits = (n >> index);

	if (index > 32)
	{
		return (-1);
	}
	else
	{
		return (bits & 1);
	}
}
