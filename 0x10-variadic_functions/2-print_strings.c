#include "variadic_functions.h"

/**
 * print_strings - prints the strings
 * @separator: separtes the strings
 * @n: number of the strings
 *
 * Return: Always void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *show;

	va_list print_em;

	va_start(print_em, n);

	for (i = 0; i < n; i++)
	{
		show = va_arg(print_em, char*);

		if (show == NULL)
		{
			printf("(nil)");
		}
		else if (*show == '\0')
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", show);
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_em);
}
