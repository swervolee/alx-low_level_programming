#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_strings - a function to print strings
 *@separator: string seperator
 *@n: the number of arguements
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;
	char *s;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(va, char *);
		if (!s)
			printf("(nil)");
		printf("%s", s);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
