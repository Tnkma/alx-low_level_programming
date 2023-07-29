int is_prime_helper(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, n / 2));
}

/**
 * is_prime_helper - Check if a number is a prime number
 * @n: The number to check
 * @i: The current divisor to test
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i - 1));
}

