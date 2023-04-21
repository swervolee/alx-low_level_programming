#include "variadic_functions.h"
/**
 * print_all - a function that  prints anything.
 * @format: a list of types of arguments passed to the function.
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, u = 0;
	va_list va;
	char *elmt = "cifs", *a;

	va_start(va, format);
	while (format && format[i])
	{
		j = 0;
		while (elmt[j])
		{
			if (format[i] == elmt[j] && u)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(va, int)), u = 1;
			break;
		case 'i':
			printf("%d", va_arg(va, int)), u = 1;
			break;
		case 'f':
			printf("%f", va_arg(va, double)), u = 1;
			break;
		case 's':
			a = va_arg(va, char *), u = 1;
			if (!a)
			{
				printf("(nil)");
				break;
			}
			printf("%s", a);
			break;
		}
		i++;
	}
	printf("\n"), va_end(va);
}
