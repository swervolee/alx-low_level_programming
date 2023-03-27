#include "main.h"
/**
 *_puts - printing an output
 *@str: the string to be painted
 *Return: always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
