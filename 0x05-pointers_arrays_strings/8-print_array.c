#include "main.h"
#include <stdio.h>
/**
 *print_array - prints the array
 *@a: the array
 *@n: the array position
 *Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			putchar(", ");
	}
	putchar(10);
}
