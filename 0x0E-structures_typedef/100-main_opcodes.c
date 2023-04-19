#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *@argc: the number of arguements
 *@argv: the arguement array
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int n_bytes, i;
	char *p_code = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
		printf("Error"), exit(2);
	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", p_code[i] & 0xFF);
		if (i != n_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
