#include <stdio.h>

/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p != 'e' && p != 'q')
			putchar(p);
	}
	putchar('\n');

	return (0);
}
