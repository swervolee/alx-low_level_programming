#include "search_algos.h"

/**
 *print_array - prints an array
 *@arr: array to print
 *@lower: start index
 *@upper: end index
 *Return: nothing
 */

void print_array(int *arr, int lower, int upper)
{
	int i;

	printf("Searching in array: ");

	for (i = lower; i <= upper; i++)
	{
		printf("%d", arr[i]);
		if (i != upper)
			printf(", ");
	}

	printf("\n");
}


/**
 *binary_search - formulates the binary search algorithm
 *@array: search array
 *@size: size of array
 *@value: the value in search
 *Return: found value index else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int L, R, M;

	L = 0;
	R = size - 1;

	while (L <= R)
	{
		print_array(array, L, R);
		M = (L + R) / 2;

		if (array[M] == value)
			return (M);

		if (array[M] < value)
			L = M + 1;

		if (array[M] > value)
			R = M - 1;
	}

	return (-1);
}
