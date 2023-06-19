#include "main.h"

/**
 *main - entry point
 *@argc: the arguement count
 *@argv: the arguement vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	int i;
	char error[] = "Error\n";

	if (argc != 3)
	{

		for (i = 0; i < _strlen(error); i++)
			_putchar(error[i]);
		exit(98);
	}
	multiply(num1, num2);
	return (0);
}
/**
 *_strlen - finds the length of a string
 *@str: the string
 *Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 *multiply - multiplies two numbers
 *@num1: the first number
 *@num2: the second number
 *Return: nothing
 */
void multiply(char *num1, char *num2)
{
	int i, j, sum = 0, carry = 0;
	char error[] = "Error\n";
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result = malloc((len1 + len2) * sizeof(int));

	if (result == NULL)
	{
		for (i = 0; i < _strlen(error); i++)
			_putchar(error[i]);
		exit(98);
	}
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i] += carry;
	}
	_print_number(result, len1 + len2);
	free(result);
}

/**
 *_print_number - prints a number
 *@number: number to rint
 *@size: the size of the number
 *Return: nothing
 */
void _print_number(int *number, int size)
{
	int leadingZero = 1, i;

	for (i = 0; i < size; i++)
	{
		if (number[i] != 0)
			leadingZero = 0;
		if (!leadingZero)
			_putchar(number[i] + '0');
	}
	if (leadingZero)
		_putchar('0');
	_putchar('\n');
}
