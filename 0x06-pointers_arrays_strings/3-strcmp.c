#include "main.h"

/**
 * _strcmp - the function prototype
 * @s1: the first string
 * @s2: the second string
 *
 *
 * Return: Always int
 */

int _strcmp(char *s1, char *s2)
{
	char *am_first = s1;
	char *lasty = s2;

	/*first find the strings and then compare using ACSII*/
	while (*am_first != '\0' && *lasty != '\0')
	{
		if (*am_first > *lasty)
		{
			return (15);
		}
		else if (*lasty > *am_first)
		{
			return (-15);
		}
		else
		{
			return (0);
		}
		am_first++;
		lasty++;
	}
	return (0);
}
