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
		i++;
	n = (i % 2 == 0) ? i / 2 : (i + 1) / 2;
	while (str[n] != '\0')
		_putchar(str[n++]);
	_putchar(10);
}
