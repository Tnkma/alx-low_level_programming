#include "main.h"

/**
 * get_bit - get the value of bit at agiven index
 * @n: the number
 * @index: the given index
 *
 * Return: the value at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask;
	int value;

	mask = 1 << index;

	if (index > 32)
	{
		return (-1);
	}
	else
	{
		value = (n & mask) >> index;
	}
	return (value);
