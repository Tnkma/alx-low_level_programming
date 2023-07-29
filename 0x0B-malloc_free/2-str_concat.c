#include "main.h"

/**
 * str_concat - concate the two strings
 * @s1: the firts strings
 * @s2: the second string
 *
 *
 * Return: a pointer to the location of the concenated memory
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size;
	char *loc;


	size = strlen(s1) + strlen(s2);
	loc = (char *)malloc(size * sizeof(char *));

	if (loc == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	strcpy(loc, s1);
	strcat(loc, s2);

	return (loc);
}
