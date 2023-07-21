#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the count of the parameters
 *
 * Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	/* Declare the variables */
	int sum = 0; /* To return the sum*/
	unsigned int i; /*to count through the loop*/
	int j; /*Hold each count*/

	/* define the variadic function*/

	va_list sum_them;

	va_start(sum_them, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			j = va_arg(sum_them, int);
			sum += j;
		}
	}
	va_end(sum_them);
	return (sum);
}
