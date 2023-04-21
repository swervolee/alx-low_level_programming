#include "variadic_functions.h"
/**
 * print_all - a function that  prints anything.
 * @format: a list of types of arguments passed to the function.
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int ba = 0, j, count = 0;
	va_list va;
	char *element = "cifs", *a;

	va_start(va, format);
	while (format && format[ba])
	{
		j = 0;
		while (element[j])
		{
			if (format[ba] == element[j] && count)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[ba])
		{
		case 'c':
			printf("%c", va_arg(va, int)), count = 1;
			break;
		case 'i':
			printf("%d", va_arg(va, int)), count = 1;
			break;
		case 'f':
			printf("%f", va_arg(va, double)), count = 1;
			break;
		case 's':
			a = va_arg(va, char *), count = 1;
			if (!a)
			{
				printf("(nil)");
				break;
			}
			printf("%s", a);
			break;
		}
		ba++;
	}
	printf("\n"), va_end(va);
}
