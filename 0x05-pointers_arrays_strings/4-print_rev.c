#include "main.h"

/**
 * print_rev - functions to print
 * @s: the variable with te value
 *
 * Return: Always void
 */

void print_rev(char *s)
{
	char pt[1000];
	int i = 0;
	int j;
	char temp;
	int m;

	strcpy(pt, s);
	j = strlen(pt) - 1;

	while (i < j)
	{
		temp = pt[j];
		pt[j] = pt[i];
		pt[i] = temp;
		i++;
		j--;
	}


	for (m = 0; pt[m] != '\0'; m++)
	{
		_putchar(pt[m]);
	}
	_putchar('\n');
}
