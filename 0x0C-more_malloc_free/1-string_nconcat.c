#include "main.h"

/**
 * string_nconcat - concatenates two strings according to n number
 * @s1: the first string
 * @s2: the second string
 * @n: the number of string
 *
 *
 * Return: A pointer to the newly created memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, i, m;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (m = 0; m < n; m++, i++)
		concat[i] = s2[m];

	concat[i] = '\0';

	return (concat);
}
