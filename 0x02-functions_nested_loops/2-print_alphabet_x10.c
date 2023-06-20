#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 *
 *
 * Return:Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int j;
	int k;

	for (k = 1; k <= 10; k++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
