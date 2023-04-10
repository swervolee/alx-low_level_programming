#include <stdio.h>

/**
 *main - functio to print its name
 *@argc: number of commandline arguements
 *@argv: array containing the cmd arguements
 *Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}