#include <stdio.h>

/**
 *main - determines the number of commandline arguement
 *@argc: the number of arguements
 *@argv:an array of the cmd arguements
 *Return: 0
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	int i = 1;

	while (i < argc)
		i++;
	return (0);
}