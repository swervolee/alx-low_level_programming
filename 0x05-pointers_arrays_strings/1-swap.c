#include "main.h"
/**
 *swap_int - swapping the values of two integer pointers
 *@a: first integer
 *@b: second integer
 *Return: always 0
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
