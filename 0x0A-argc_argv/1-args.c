#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main -  the main function
 * @argc: the length arguments
 * @argv: the string arguments
 *
 * Return: A pointer to main
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
