#include "main.h"

/**
 * _memset - function prototype
 * @s: the memory pointer to
 * @b: the value to be fiiled in the memory
 * @n: number f times the value will be filled 
 *
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned int j = 0;

	while (j < n && b != '\0')
	{
		for (i =0; i < n; i++)
			j++;
	}
	return (s);
}

