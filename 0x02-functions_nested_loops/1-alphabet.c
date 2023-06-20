#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower
 *
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	_putchar('\n');
}
