#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Return: 0;
 */

int main(void)
{
	int limit = 2772, i, num;

	srand(time(NULL));
	for (i = 0; limit > 122; i++)
	{
		num = rand() % 127;
		limit -= num;
		printf("%c", num);
	}
	printf("%c", limit);
	return (0);
}
