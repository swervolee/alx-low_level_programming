#include <stdio.h>
#include <stdlib.h>
/**
 * *main - entry point
 *  *@ac: arguement count
 *   *@av: arguement vector
 *    *Return: 0
 */


int main(int ac, char *av[])
{
	int a, b, mult;

	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}


	a = atoi(av[1]);
	b = atoi(av[2]);

	mult = a * b;

	printf("%d\n", mult);
	return (0);
}
