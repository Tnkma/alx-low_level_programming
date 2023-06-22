#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: the input to be checked
 *
 *
 *
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	char alp;

	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		if (c == alp)
		{
			return (1);
		}
		else
			return (0);
	}

	return (0);
}

