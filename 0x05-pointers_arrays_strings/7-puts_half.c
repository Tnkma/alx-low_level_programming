#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: The value to print
 *
 * Return: Always void
 */

void puts_half(char *str)
{
	int length_of, d_half, i;

	length_of = strlen(str);
	if (length_of % 2 == 0)
	{
		d_half = (length_of + 1) / 2;
		for (i = d_half; i < length_of; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		d_half = length_of / 2;
		for (i = d_half; i < length_of; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

