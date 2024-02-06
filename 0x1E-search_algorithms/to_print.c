#include "search_algos.h"

/**
 * _putchar - prints the string
 * @c: the character to print
 *
 * Return: Always 0 for success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print - since _putchar prints one c, print plenty
 * @str: the string to print
 *
 * Return: void since were void
 */
void _print(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		str++;
	}
	/*_putchar('\n');*/
}
