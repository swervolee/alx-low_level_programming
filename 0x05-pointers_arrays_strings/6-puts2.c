#include "main.h"
/**
 *puts2 - prints every other character
 *str: the string
 *Return: always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[0]);
		i++;
	}
	_putchar(10);
}
