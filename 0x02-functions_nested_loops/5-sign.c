#include "main.h"
/**
 *print_sign - prints the sign of an integer
 *@n: the character
 *Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_zputchar('-');
		return (-1);
	}
}
