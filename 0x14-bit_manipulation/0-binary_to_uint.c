#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: the string pointing to the number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		val <<= 1;

		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else
		{
			if (b[i] == '1')
			{
				val ^= 1;
			}
		}
		i++;
	}
	return (val);
}

