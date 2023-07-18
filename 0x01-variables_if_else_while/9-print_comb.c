#include <stdio.h>

/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/*declaring variables to the output*/
	int n;

	/*using for loop to iterates the numbers*/
	for (n = 0; n <= 9; n++)
	{
		/*print the output and increase it by 1*/
		putchar(n + '0');
		{
			if (n != 9)
				putchar(',');
			{
				if (n < 9)
					putchar(' ');
			}
		}
	}
	putchar('\n');


	return (0);
}
