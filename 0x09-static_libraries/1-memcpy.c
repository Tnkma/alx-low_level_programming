#include "main.h"

/**
 * _memcpy - memory copy
 * @dest: the destination of the memory
 * @src: source
 * @n: number
 *
 * Return: a char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
