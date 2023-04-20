#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - a function to print
 *@format: the format specifier
 *Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	char *s;
	va_list agstna;

	va_start(agstna, format);

	while (format[i] && format)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(agstna, int)), j = 1;
			break;
		case 'i':
			printf("%d", va_arg(agstna, int)), j = 1;
			break;
		case 'f':
			printf("%f", va_arg(agstna, double)), j = 1;
			break;
		case 's':
			s = va_arg(agstna, char *);
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s), j = 1;
			break;

		}
		if (format[i + 1] && j)
			printf(", "), j = 0;
		i++;
	}
	va_end(agstna);
	printf("\n");
}
