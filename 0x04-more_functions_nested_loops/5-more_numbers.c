#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int num, j;


	j = 0;
	while (j <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('1');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
		j++;
	}
}
