#include "main.h"
/**
*print_to_98 - printing numbers to 98
*@n:integer
*Return: 0
*/
void print_to_98(int n)
{
	if (n > 0 && n <= 98)
		for (; n <= 98; n++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (((n / 10) + '0') != 9 && ((n % 10) + '0') != 8)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
}
