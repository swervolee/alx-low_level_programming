#include "variadic_functions.h"
/**
 *print_numbers - a function to print numbers
 *@n: the number of arguements
 *@separator: string to seperate the numbers
 *return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list va;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
