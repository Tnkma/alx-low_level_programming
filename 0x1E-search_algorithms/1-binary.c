#include "search_algos.h"
/**
 * binary_search - searches for a value using Binary search
 * @array: A pointer to the array to be searched
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: The value searched
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, start = 0;
	size_t end = size - 1;
	size_t middle = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (start <= end)
	{
		middle = start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i > start)
			{
				printf(", ");
			}
			printf("%d", array[i]);
		}
		printf("\n");
		if (array[middle] == value)
		{
			return (middle);
		}
		if (array[middle] > value)
		{
			end = middle - 1;

		}
		else
		{
			start = middle + 1;
		}
	}
	return (-1);
}
