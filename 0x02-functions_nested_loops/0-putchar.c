#include <stdio.h>
#include <main.h>
#include <_putchar.c>
/**
 *main - entry point
 *Return:0
 */
int main(void)
{
	char *x = "_putchar";

	for (int i = 0; x[i] != '\0'; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
