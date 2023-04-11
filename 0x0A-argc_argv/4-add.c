#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - function to add two numbers
 *@argc: the number of arguements
 *@argv: the arguements in for of array
 *Return:0
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 0, sum = 0;

	if (!(argc > 1))
		return (0);

	while ( i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{

			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}

			j++;
		}

		sum = sum + atoi(argv[i]);
		i++;

	}
	printf("%d\n", sum);

	return (0);
}
