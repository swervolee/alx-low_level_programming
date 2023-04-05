#include "main.h"

/**
 *check - checks for a prime number
 *@a: first integer
 *@b: second integer
 *Return: 0 or 1 depending whether  a prime or not
 */

int check(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0)
		return (0);
	return (check(a, b - 1));
}

/**
 *is_prime_number - estblishes whether a number is prime or not
 *@n: the integer
 *Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, n / 2));
}
