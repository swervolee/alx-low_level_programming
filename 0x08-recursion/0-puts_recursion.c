#include "main.h"

/**
 *_puts_recursion - a function that prints a string using recursion
 *@s: the string input
 *Return: nothing
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
