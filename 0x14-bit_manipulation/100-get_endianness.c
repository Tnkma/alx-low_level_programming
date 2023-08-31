#include "main.h"

/**
 * get_endianness - checks the archteture of byte storage
 *
 *
 * Return: Always 0 for success
 */

int get_endianness(void)
{
	unsigned int val = 0x12345678;
	unsigned char *address = (unsigned char *) &val;

	if (*address == 0x78)
	{
		return (1);
	}
	else if (*address == 0x12)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
