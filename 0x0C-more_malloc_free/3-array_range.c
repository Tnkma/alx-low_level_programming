#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: contain min values
 * @max: contains max values
 *
 * Return: Always an integer
 */

int *array_range(int min, int max)
{
	int *for_array;
	int m;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;

	for_array = malloc(sizeof(int) * j);
	if (for_array == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < j; m++)
	{
		for_array[m] = min++;
	}
	return (for_array);
}
