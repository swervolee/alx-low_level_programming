#include "main.h"

int refine(int s, int r)
{
	if (s * s == r)
		return (s);
	else if (s * s > r)
		return (refine(s - 1, r));
	else
		return refine(s + 1, r);
}


#include "main.h"
/**
 *_sqrt_recursion - finds a square root
 *@n: the number to find square root from
 *Return: the square root
 */

int _sqrt_recursion(int n)
{
	int res;

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
		res = refine(1, n);
		if (res * res == n)
		{
			return (res);
		}
		else
			return (-1);
	}
}
