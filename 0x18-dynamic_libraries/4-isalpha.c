#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: input to be checked
 *
 *
 *
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
