#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to reverse
 *
 * Return: A void pointer
 */

void _print_rev_recursion(char *s)
{
	int j;
	int len;

	len = strlen(s);
	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);
	/*_putchar('\n');*/
}
