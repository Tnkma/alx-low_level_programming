#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int check_digit(char *s);
void print_number(int n);

/**
 * check_digit - checks if a string is anumber
 * @s: string to check
 *
 * Return: Always 0 for success
 */

int check_digit(char *s)
{
	int m = 0;

	while (s[m])
	{
		if (s[m] < '0' || s[m] > '9')
		{
			return (0);
		}
		m++;
	}
	return (1);
}
/**
 * print_number - using _putchar
 * @n: number to print
 *
 *
 * Return: Always 0 for success
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: the arguments itself
 *
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	int entry1;
	int entry2;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!check_digit(argv[1]) || !check_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	entry1 = atoi(argv[1]);
	entry2 = atoi(argv[2]);
	sum = entry1 * entry2;

	print_number(sum);
	_putchar('\n');

	return (0);
}
