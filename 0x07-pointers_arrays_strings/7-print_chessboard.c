#include "main.h"

/**
 *print_chessboard - the function
 *@a: array length
 *return: 0
 */

void print_chessboard(char (*a)[8])
{
	unsigned int c = 0, i;

	while (c < 8)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[c][i]);
		}
		_putchar('\n');
		c++;
	}
}
