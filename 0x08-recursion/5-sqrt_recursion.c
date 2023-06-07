#include "main.h"

/**
 *refine - a function to filter the square root
 *@n: the imput number
 *@half: the imput number divided by 2
 *Return: the square root if found else -1
 */

int refine(int n, int half)
{
	if (half * half == n)
		return (half);
	if (half * half < n)
		return (-1);
	return (refine(n, half - 1));
}

/**
 *_sqrt_recursion - a function to find the square root of number
 *@n: the input number
 *Return: -1 if the number has no square root else the square root
 */

int _sqrt_recursion(int n)
{
	int (*func)(int a, int b);
	int half;

	half = n / 2;
	func = refine;
	if (half * half == n)
		return (half);
	else if (n == 1)
		return (1);
	else
		return (func(n, half));
}
