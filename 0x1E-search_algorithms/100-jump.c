#include "search_algos.h"


/**
 *jump_search - jump search algorithm
 *@array: the array search
 *@size: array size
 *@value: value to search
 *Return: index the value was found in
 */


int jump_search(int *array, size_t size, int value)
{
	int i, q;

	q = sqrt(size);
	i = 0;

	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]", i, array[i]);
			return i;
		}

		if (array[i] > value)
		{
			print("Value found between indexes [%] and [%d]
