#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - the main function
 * @argc: the number arguments
 * @argv: the string arguments
 *
 * Return: A integer pointer
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
