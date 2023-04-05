#include "main.h"
/**
 *refine - function to refine the sqrt
 *@s: the first parameter
 *@r: the second parameter
 *Return: the sqrt
 */
int refine(int s, int r)
{
	long long int guess;

	guess = s / 2;
	if (guess * guess == r)
		return (guess);
	if (guess * guess > r)
		return (refine(s - 1, r));
	if (guess * guess < r)
		return (refine(s + 1, r));
	return (-1);
}

/**
 *_sqrt_recursion - main entry
 *@n: the integer
 *Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (refine(n, n));
}
