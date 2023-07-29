/**
 * sqrt_comparer - finds the natural square root of an input number
 * @n: The number to find the square root of
 * @i: The current divisor to test
 *
 * Return: The natural square root of n, or -1 if n has no natural
 *         square root.
 */
int sqrt_comparer(int n, int i)
{
    if (i * i == n)
    {
        return (i);
    }
    else if (i * i > n)
    {
        return (-1);
    }
    return (sqrt_comparer(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n. If n does not have a natural
 *         square root, return -1.
 */
int _sqrt_recursion(int n)
{
    return (sqrt_comparer(n, 1));
}

