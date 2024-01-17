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

/**
 *exponential_search - search algorithm
 *@array: search array
 *@size: size of the array
 *@value: the value in search
 *Return: index of the found value else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int i, j, array2[SIZE], left, right, bin_search;

	i = 1;

	if (!array)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]", array[0]);
		return (0);
	}

	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
		if (array[i] == value)
			return (i);
	}

	left = i / 2;
	right = i < (int)size ? i : i - 1;

	for (j = left; j <= right; j++)
		array2[j - left] = array[j];

	bin_search = binary_search(array2, (right - left) + 1, value);

	return (bin_search != -1 ? bin_search + left : bin_search);
}
