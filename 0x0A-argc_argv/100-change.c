#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function
 * @argc: the number of inputs
 * @argv: the value inputed
 *
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	int cent;
	int coins = 0;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	coins += cent / 25;
	cent %= 25;

	coins += cent / 10;
	cent %= 10;

	coins += cent / 2;
	cent %= 2;

	coins += cent;
	printf("%d\n", coins);

	return (0);
}



