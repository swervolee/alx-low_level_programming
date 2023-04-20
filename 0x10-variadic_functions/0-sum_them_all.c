#include "variadic_functions.h"
/**
 *sum_them_all - a function to sum numbers
 *@n: the amount of parameters
 *Return: sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j = 0;
	va_list va;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		j += va_arg(va, int);
	}
	return (j);
}
