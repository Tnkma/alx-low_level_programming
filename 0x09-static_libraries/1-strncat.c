#include "main.h"

/**
 * _strncat - the function to duplicate
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of strings to allocate
 *
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	char *end = src;
	int i;

	/*check the end of dest*/
	while (*start != '\0')
	{
		start++;
	}

	/* Till when we get to the end of dest then*/
	/* check the value of n and check if end is equal to null*/
	for (i = 0; i < n && *end != '\0'; i++)
	{
		*start = *end;
		end++;
		start++;

	}
	/*assign null to the end of dest after appending it*/
	*start = '\0';
	/* return back the pointer*/
	return (dest);
}
