#include "main.h"
/**
*print_rev - prints a string in reverse
*@s: the string
*Return: always 0
*/
void print_rev(char *s)
{
	int i;
	int count = 0;

	i = 0;
	while (s[i] != 0)
	{
		count +=1;
		i++;
	}
	while (count--)
	{
		_putchar(s[count]);
	}
}
