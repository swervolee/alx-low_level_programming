#include <stdio.h>
#include <stdlib.h>

/**
 *main - function to add two numbers
 *@argc: the number of arguements
 *@argv: the arguements in for of array
 *Return:0
 */

int main(int argc, char *argv[])
{
	int i, j, a = 1, sum;

	if (argc == 1)
	{
		printf("\n");
		return (0);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (j = 0; argv[2][j] != '\0'; j++)
	{
		if (!(argv[2][j] >= '0' && argv[2][j] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
	}

	sum = 0;

	while (a < argc)
	{
		sum = sum + atoi(argv[a]);
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
