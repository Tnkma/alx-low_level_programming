#include "main.h"

/**
 * _strcat - the function to write
 * @dest: destination string
 * @src: source string
 *
 * Return: Always a char pointer
 */

char *_strcat(char *dest, char *src)
{
	char *base_string = dest;
	char *source_string = src;

	while (*base_string != '\0')
	{
		base_string++;
	}
	while (*source_string != '\0')
	{
		*base_string = *source_string;
		base_string++;
		source_string++;
	}
	*base_string = '\0';
	return (dest);
}
