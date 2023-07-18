#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: The number argument
 * @argv: the input argument
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

