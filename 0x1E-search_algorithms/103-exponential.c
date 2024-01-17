#include "search_algos.h"


/**
 *binary_search - formulates the binary search algorithm
 *@array: search array
 *@size: size of array
 *@value: the value in search
 *Return: found value index else -1
 */

int binary_search2(int *array, int left, int right, int value)
{
	int L, R, M, i;

	L = left;
	R = right;

	while (L <= R)
	{
		printf("Searching in array: ");

		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		M = L + (R - L) / 2;

		if (array[M] == value)
			return (M);

		if (array[M] < value)
			L = M + 1;

		if (array[M] > value)
			R = M - 1;
	}

	return (-1);
}

/**
 *exponential_search - search algorithm
 *@array: search array
 *@size: size of the array
 *@value: the value in search
 *Return: index of the found value else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int left, right, i;

	i = 1;

	if (!array)
		return (-1);
	while (i < (int)size && array[0] != value && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = i < (int)size ? i : i - 1;
	printf("Value found between indexes [%d] and [%d]\n", left, right);

	return (binary_search2(array, left, right, value));
}
