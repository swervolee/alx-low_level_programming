#include "main.h"
/**
 *_sqrt_recursion - finds the square root of a number
 *@n: the number
 *Return: the square root
 */

int _sqrt_recursion(int n)
{
	int guess;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		guess = n / 2;

		while (guess * guess > n)
			guess = (guess + n/ guess) / 2;
	}
	if (guess * guess != n)
		return (-1);
	else
		return (guess);
}
