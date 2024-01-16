#include "search_algos.h"
/**
 *linear_search - a linear search algorithm
 *@array: search array
 *@size: the size of the array
 *@value: the search value
 *Return: the found search else -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; array && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
