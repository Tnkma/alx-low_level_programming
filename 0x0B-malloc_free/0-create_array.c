#include "main.h"

/**
 * create_array - creates an array and allocate memory
 * @size: size of the array
 * @c: the char string
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char*)malloc(size*sizeof(char));


	if (ptr == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
