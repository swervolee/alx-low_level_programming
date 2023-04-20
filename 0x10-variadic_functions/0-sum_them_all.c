#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - a function to sum numbers
 *@n: the amount of parameters
 *Return: sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int j = 0;
	va_list va;

	if (n == 0)
		return (0);
	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		j += va_arg(va, int);
	}
	va_end(va);
	return (j);
}
