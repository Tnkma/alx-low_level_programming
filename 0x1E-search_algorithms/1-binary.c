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
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

