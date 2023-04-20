#include "variadic_functions.h"
/**
 * sum_them_all - function that sums all parameters
 *@n: number of parameters
 *Return: result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k;
	unsigned int w = 0;
	va_list sum;

	va_start(sum, n);
	for (k = 0; k < n; k++)
	{
		w += va_arg(sum, int);
	}
	return (w);
}
