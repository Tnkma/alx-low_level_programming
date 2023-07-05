#include "main.h"

/**
 * _puts_recursion - prints the string pointer to
 * @s: the destination of the string
 *
 * Return: a void pointer.
 */

void _puts_recursion(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		_putchar(s[c]);
	_putchar('\n');
}
