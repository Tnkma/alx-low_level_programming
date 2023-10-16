#include "main.h"

/**
 * _strchr - finds a certain character and prints from there
 * @s: the memory to search
 * @c: the charcter to search
 *
 * Return: A pointer to the address of the memory
 */

char *_strchr(char *s, char c)
{
	/* declare a variable to ilterate the characaters*/
	int i;

	int length = strlen(s);

	for (i = 0; i <= length; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
