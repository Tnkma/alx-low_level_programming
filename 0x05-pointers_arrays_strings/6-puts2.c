#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the pointer to the value
 *
 * Returned: Always void
 */

void puts2(char *str)
{
	int i, out_put;
	char nu[1000];

	strcpy(nu, str);
	out_put = strlen(nu);

	for (i = 0; i < out_put; i += 2)
	{
		_putchar(nu[i]);

	}
	_putchar('\n');
}
