#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: points to the string of char
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nums = 0;


	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		nums <<= 1;

		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			if (*b++ == '1')
			{
				nums ^= 1;
			}

		}
	}
	return (nums);
}
