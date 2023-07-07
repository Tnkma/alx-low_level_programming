#include "main.h"

/**
 * factorial - factorial of a number
 * @n: the input number
 *
 * Return: A pointer to int
 */

int factorial(int n)
{
	/*Our first Base case*/
	if (n < 0)
	{
		return (-1);
	}
	/*Second Base case*/
	else
	{
		if (n == 0)
			return (1);
	}
	return (n * factorial(n - 1));
}
