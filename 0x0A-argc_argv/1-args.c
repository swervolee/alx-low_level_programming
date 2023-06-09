#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: Returns the number of arguements entered.
 * @argv: Pointer to the arguements entered.
 *
 * Return: 0 on success else 1.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int count = argc - 1;

	printf("%d\n", count);
	return (0);
}
