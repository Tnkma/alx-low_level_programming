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
	memset(s, b, n);
	return (s);
}
