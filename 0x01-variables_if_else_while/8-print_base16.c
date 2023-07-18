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
	int n;
	char c;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
