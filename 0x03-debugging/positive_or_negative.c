#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - checks if a numbetr is positive
 *
 * @i: value to be checked
 * betty coding style stays here
 *
 * Return: Always 0 meaning (success)
 */

void positive_or_negative(int i)
{
	/* your code goes there */

	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	else
		printf("%d is zero\n", i);

}
