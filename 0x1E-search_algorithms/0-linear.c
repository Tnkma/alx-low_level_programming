#include "search_algos.h"
/**
 * linear_search - searches the array using the linear algo
 * @array: points to the array
 * @size: the size of the array
 * @value: the value to find
 * Return: the value gotten or -1 if NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
