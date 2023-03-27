#include "main.h"
/**
 *puts_half - prints half the string
 *@str: the string
 *Return: always 0
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i += 1;
	n = i / 2;
	while (n < i)
	{
		if (i % 2 != 0)
		{
			_putchar(str[n]);
			n = (i - 1) / 2;
		}
		_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
