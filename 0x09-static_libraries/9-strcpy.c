#include "main.h"
/**
 * _strspn - returns the number of bits in the initial segment
 * @s: the memory to compare to
 * @accept: the character to check
 *
 * Return: a pointer with the count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m;

	m = strspn(s, accept);

	return (m);
}
