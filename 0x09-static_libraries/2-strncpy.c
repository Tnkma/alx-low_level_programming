#include "main.h"

/**
 * _strncpy - function to duplicate
 * @dest: destination string
 * @src: source string
 * @n: number of value
 *
 *
 * Return: Always char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	char *end = src;
	int no;

	for (no = 0; no < n && *end != '\0'; no++)
	{
		*start = *end;
		start++;
		end++;
	}
	for (; no < n; no++)
	{
		*start = '\0';
		start++;
	}
	return (dest);
}
