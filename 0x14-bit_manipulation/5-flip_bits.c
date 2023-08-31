#include "main.h"

/**
 * flip_bits - get the number of bits to flip
 * @n: the number to flip
 * @m: the count
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int to_flip;
	int bit_count;

	to_flip = n ^ m;
	bit_count = counter(to_flip);
	return (bit_count);
}

/**
 * counter - conts the bits
 * @num: number to count
 *
 * Return: the count
 */

int counter(int num)
{
	int i = 0;

	while (num != 0)
	{
		num = num & (num - 1);
		i++;
	}
	return (i);
}
