#include <stdio.h>
#include <stdlib.h>

/**
 *main - function to add two numbers
 *@argc: the number of arguements
 *@argv: the arguements in for of array
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1)
	{
		printf("\n");
		return (0);
	}

	for (i = 0; i != '\0'; i++)
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (j = 0; j != '\0'; j++)
	{
		if (!(argv[2][j] >= '0' && argv[2][j] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	return (0);
}