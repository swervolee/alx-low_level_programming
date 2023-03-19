#include <stdio.h>
/**
 *main - entry point
 *Return:0
 */
int main(void)
{
	char n = 48;
	char a;

	while (n < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (n != a && n < a)
			{
				putchar(n);
				putchar(a);
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
