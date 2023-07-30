#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: member to give memory
 * @size: size of the array
 *
 * Return: A void cus were void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int m, j;
	char *ptr;

	m = 0;
	j = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	ptr = malloc(j);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (m < j)
	{
		ptr[m] = 0;
		m++;
	}

	return (ptr);
}

