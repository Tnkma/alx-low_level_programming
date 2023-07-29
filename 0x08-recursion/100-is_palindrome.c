#include "main.h"

/**
 * is_palindrome - checks if a string is pallidrome or not
 * @s: the string to check
 *
 *
 * Return: either 1 or 0
 */

int is_palindrome(char *s)
{
	int m;
	int com = 0;
	int len;

	len = strlen(s);
	for (m = 0; m < len / 2; m++)
	{
		if (s[m] == s[len - m - 1])
			com++;
	}
	if (com == m)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
