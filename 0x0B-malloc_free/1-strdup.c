#include "main.h"

/**
 * _strdup - returns a pointer to the new strings
 * @str: the string to duplicate
 *
 *
 * Return: A pointer to the new string
 */

char *_strdup(char *str)
{
	char *new_string;
	unsigned int i;
	unsigned int size;

	size = strlen(str) + 1;
	new_string = (char *)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}


	if (str > new_string)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		strcpy(new_string, str);
	}

	return (new_string);
}
