#include <stdio.h>

/**
 *main - a function to multiply two numbers
 *@argc: the number of arguements
 *@argv: the arguements
 *Return: 0
 */

int main(int argc, char *argv[])
{
	char e[] = "Error";
	int sign, i = 0, j = 0, no1 = 0, no2 = 0, sign1, result = 0;

	if (argc < 3)
	{
		printf("%s\n", e);
		return (1);
	}

	if (argv[1][i] == '-')
	{
		sign = -1;
		i = 1;
	}

	else if (argv[2][j] == '-')
	{
		sign1 = -1;
		j = 1;
	}

	while (argv[1][i] != '\0')
	{
		no1 = no1 * 10 + (argv[1][i] - '0');
		i++;
	}
	while (argv[2][j] != 0)
	{
		no2 = no2 * 10 + (argv[2][j] - '0');
		j++;
	}

	result = no1 * no2 * sign * sign1;

	printf("%d", result);
	return (0);
}
