#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@t: the character
 *Return: 0
 */
int print_last_digit(int t)
{
	int ld = t % 10;

	if (ld < 0)
	_putchar('0' + ld);
	return (0);
}
