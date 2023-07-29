#include "main.h"


int is_palindrome_helper(char *start, char *end);
int find_length(char *s);

int is_palindrome_helper(char *start, char *end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, and 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = find_length(s);

	return (is_palindrome_helper(s, s + len - 1));
}

/**
 * find_length - finds the length of the string
 * @s: the string to get th length
 *
 * Return: the length of the string
 */

int find_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + find_length(s + 1));
	}
}

/**
 * is_palindrome_helper - Recursively checks if a string is a palindrome
 * @start: Pointer to the start of the substring to check
 * @end: Pointer to the end of the substring to check
 *
 * Return: 1 if the substring is a palindrome, and 0 otherwise
 */
int is_palindrome_helper(char *start, char *end)
{

	if (start >= end)
	{
		return (1);
	}
	else if (*start != *end)
	{
		return (0);
	}
	else
		return (is_palindrome_helper(start + 1, end - 1));
}

