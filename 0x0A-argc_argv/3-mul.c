#include <stdlib.h>
#include <stdio.h>

/**
 * main - The main function
 * @argc: the number argumenst
 * @argv: the string arguments
 *
 *
 * Return:  A pointer to main
 */

int main(int argc, char **argv)
{
	int i, sum = 1;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
