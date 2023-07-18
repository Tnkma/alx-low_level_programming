#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - check the code.
 * @c: compares the value
 *
 * Return: Always 0 (success)
 *
 */

int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
