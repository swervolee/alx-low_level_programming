#include "function_pointers.h"

/**
 *int_index - the function that searches for an integer
 *@array: the array
 *@size: the size of the array
 *@cmp: pointer to functio to be executed
 *Return:an index to character match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
