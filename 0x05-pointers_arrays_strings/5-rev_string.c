#include "main.h"

/**
 * rev_string - reverses the string
 * @s: the string to reverse
 *
 * Return: Always void
 */

void rev_string(char *s)
{
	int i = 0;
	char temp;
	int j, m;

	j = strlen(s) - 1;

	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}

	for (m = 0; s[m] != '\0'; m++)
	{

	}
}
