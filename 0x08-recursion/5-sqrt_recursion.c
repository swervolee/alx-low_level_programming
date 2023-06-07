/**
 * sqrt_recursive - A helper function to find the square root recursively
 * @n: The input number
 * @guess: The current guess for the square root
 * @prev: The previous guess for the square root
 * Return: The square root if found, -1 otherwise
 */
int sqrt_recursive(int n, int guess, int prev)
{
	if (guess * guess == n)
		return (guess);

	if (guess > n / guess)
		return (prev);

	return (sqrt_recursive(n, guess + 1, guess));
}

/**
 * _sqrt_recursion - A function to find the square root of a number
 * @n: The input number
 * Return: The square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_recursive(n, 1, 0));
}
