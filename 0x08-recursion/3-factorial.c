#include "main.h"

/**
 * *factorial - a function that finds the factorial of number
 *  *@n: the input number
 *   *Return: the facorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
