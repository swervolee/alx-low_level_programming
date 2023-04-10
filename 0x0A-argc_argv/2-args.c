#include <stdio.h>

/**
 *main - a function to print all its arguements
 *@argc: the number of arguements
 *@argv: the arguements
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}