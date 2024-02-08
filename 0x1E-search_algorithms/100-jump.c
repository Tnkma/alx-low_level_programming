#include "search_algos.h"
#include <math.h>

/**
 * min - checks which is greater
 * @a: the first value
 * @b: the second vaalue
 *
 * Return: the greater value
 */

int min(size_t a, size_t b)
{
	if (b > a)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

/**
 * jump_search - searches the sorted array using jump_search algo
 * @array: A pointer to the array to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 *
 * Return: the value if found and -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
