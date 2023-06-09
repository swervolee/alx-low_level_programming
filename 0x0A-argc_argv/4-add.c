#include <stdio.h>
#include <stdlib.h>

/**
 * *main - Entry pont of the program.
 *  *@argc: Arguements counter.
 *   *@argv: Pointer to the arguements array.
 *    *
 *     *Return: 0 upon succes, else 1.
 */


int main(int argc, char *argv[])
{
	int add = 0, i, j, check = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		check = 0;

		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				check = 1;
				break;
			}
		}
		if (check == 1)
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
