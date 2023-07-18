#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @k: the number to print
 *
 *
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int k)
{
	int last_digit;

	last_digit = abs(k) % 10;
	_putchar(last_digit + '0');


	return (last_digit);
}
