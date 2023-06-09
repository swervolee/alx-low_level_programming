#include <stdio.h>

/**
 * main- Entry point of the program.
 * @argc: Arguement counter.
 * @argv: Pointer to an array of arguements entered.
 *
 * Return: 0 upon success else 1.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
