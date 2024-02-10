#include "search_algos.h"
/**
 * interpolation_search - interpolation search algorithms
 * advanced binary search
 * @array: A pointer to the array to search
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the index of the value found and -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				return (low);
			}
			return (-1);
		}
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	printf("Value checked array[%ld] is out of range\n", high);
	return (-1);
}
