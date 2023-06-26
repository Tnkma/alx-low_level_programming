#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
	int hold_it;

	hold_it = *b;
	*b = *a;
	*a = hold_it;
}
