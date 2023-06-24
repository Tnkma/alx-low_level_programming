#include "main.h"

/**
 * _isdigit - checks for numbers
 * @c: inputed value to be checked
 *
 *
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	else
		return (0);
	}
	return (0);
}
