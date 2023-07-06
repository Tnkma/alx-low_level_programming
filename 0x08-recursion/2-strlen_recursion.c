#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: the string to count
 *
 *
 * Return: A pointer containing the result
 */

int _strlen_recursion(char *s)
{
	/*Base case to check the code*/
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
