#include "main.h"
/**
 *print_numbers - prints numbers from 0-9
 *Return: 0
 */
void print_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
