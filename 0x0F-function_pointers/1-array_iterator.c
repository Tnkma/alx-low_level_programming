#include "function_pointers.h"
#include <stddef.h>


/**
 * array_iterator - iterates through the array
 * @array: The array of integers
 * @size: size of the integers
 * @action: actions performed
 *
 * Return: Non since were void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m = 0;


	if (array && action)
	{
		while (m < size)
		{
			action(array[m]);
			m++;
		}
	}
}

