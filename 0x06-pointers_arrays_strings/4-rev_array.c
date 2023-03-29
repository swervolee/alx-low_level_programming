#include "main.h"
/**
 *reverse_array - reverses a string
 *@a: string
 *@n: the limit
 */
void reverse_array(int *a, int n)
{
	int tmp = 0, length = 0;

	for (; length < n / 2; length++)
	{
		tmp = *(a + length);
		*(a + length) = *(a + n - length - 1);
		*(a + n - length - 1) = tmp;
	}
}
