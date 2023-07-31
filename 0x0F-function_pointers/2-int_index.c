#include "function_pointers.h"

/**
 * int_index - The string to search
 * @array: the array
 * @size: the size of the integer
 * @cmp: ointerto the function
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		while (j < size)
		{
			if (cmp(array[j]))
			{
				return (j);
			}
			j++;
		}
	}

		return (-1);
}

