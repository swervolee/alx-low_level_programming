#include <stdio.h>
/**
 *main - entry point
 *Return:0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'i')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
