#include "main.h"
/**
 *print_number - printing nums
 *@n: number
 *Return: 0
 */
void print_number(int n)
{
	int number_of_digits = 0, result = 0, digit, i, tmp;

	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}
	tmp = n;
	if (n == 0)
		_putchar(0 + '0');
	while (tmp != 0)
	{
		tmp /= 10;
		number_of_digits++;
	}
	for (i = 0; i < number_of_digits; i++)
	{
		digit = n % 10;
		result = (result * 10) + digit;
		n = n / 10;
	}
	for (i = 0; i < number_of_digits; i++)
	{
		digit = result % 10;
		result /= 10;
		_putchar(digit + '0');
	}
}
