#include "variadic_functions.h"

/**
 * print_numbers - prints the number with spaces
 * @separator: the string that sets the separation
 * @n: the inputed number
 *
 * Return: a void pointer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int show;
	unsigned int i;

	va_list print_em;

	va_start(print_em, n);

	for (i = 0; i < n; i++)
	{
		show = va_arg(print_em, int);
		printf("%d", show);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_em);
}
