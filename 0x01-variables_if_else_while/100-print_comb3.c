#include <stdio.h>
/**
 *main - entry point
 *Return:0
 */
int main(void)
{
	int n = '0';
	int a;

	while (n <= '9')
	{
		a = '0';
		while (a <= '9')
		{
			if (n != a && n < a)
			{
				putchar(n);
				putchar(a);
				if (n == 8 && a ==9)
				{
					//putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
