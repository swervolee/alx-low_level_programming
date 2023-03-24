#include "main.h"
/**
 *print_square - function
 *@size: the square size
 *Return: 0
 */
void print_square(int size)
{
	int rows = size;
	int orsize = size;

	if (size > 0)
	{
		while (size--)
		{
			while (rows--)
			{
				_putchar(35);
			}
			_putchar(10);
			rows = orsize;
		}
	}
	else
		_putchar(10);
}
