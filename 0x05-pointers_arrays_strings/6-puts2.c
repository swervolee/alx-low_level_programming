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
		if ('a' <= str[i] <= 'z' && 'Z' <= str[i] <= 'Z')
		{
			_putchar(str[i]);
		}
		else
			continue;
		i += 2;
	}
	_putchar(10);
}
