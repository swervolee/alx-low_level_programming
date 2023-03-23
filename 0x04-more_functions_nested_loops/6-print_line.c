#include "main.h"
/**
 *print_line - prints a staright line
 *@n: the integer
 *Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i <  n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
