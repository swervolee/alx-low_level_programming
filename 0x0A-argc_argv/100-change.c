#include <stdio.h>
#include <stdlib.h>

/**
 * *main - entry point
 *  *@ac: arguement count
 *   *@av: the arguement vector
 *    *Return: zero
 */

int main(int ac, char **av)
{
	int array[] = {25, 10, 5, 2, 1}, i = 0, j = 0, count = 0;
	int num;

	if (ac == 1 || ac > 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(av[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= array[i])
			count++, num -= array[i];
		i++;
	}
	printf("%d\n", count);
	return (0);
}
