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

	while (i < (int)size)
	{

		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       i - q, i);

			for (i = i - q; i < (int)size; i++)
			{
				printf("Value checked array[%d] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}

		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += q;
	}

	printf("Value found between indexes [%d] and [%d]\n", i - q, i);
	for (i -= q; i < (int)size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
