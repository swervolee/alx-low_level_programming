#include <stdio.h>
#include <stdlib.h>
/**
 *main -  program that prints the minimum number of coins to make change
 *@argc: the arguement count
 *@argv: the arguement vector
 *Return: the lowest number of change
 */

int main(int argc, char *argv[])
{
	int m;
	int *ptr;
	int flag = 0;
	int arr[5] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	ptr = arr;
	m = atoi(argv[1]);
	while (ptr < arr + 5 && m != 0)
	{
		if (m >= *ptr)
		{
			flag += m / *ptr;
			m = m % *ptr;
		}
		else
			ptr++;
	}
	printf("%d\n", flag);
	return (0);
}
