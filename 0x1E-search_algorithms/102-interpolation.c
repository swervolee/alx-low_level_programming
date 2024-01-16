#include "search_algos.h"

/**
 *recursive_interpolation - searches using interpolation recursively
 *@array: the array to search in
 *@Low: left pointer
 *@High: right pointer
 *@search: target search
 *@dflt: default array length
 *Return: index of found element else -1
 */

int recursive_interpolation(int *array, int Low, int High,
			    int search, int dflt)
{
	int pos;

	if (Low <= High && array[Low] <= search && array[High] >= search)
		pos = Low + (((double)(High - Low) / (array[High] - array[Low]))
			     * (search - array[Low]));

	printf("Value checked array [%d] = [%d]\n", pos, array[pos]);
	if (array[pos] == search)
		return (pos);
	if (array[pos] < search)
		return (recursive_interpolation(array,
						pos + 1, High, search, dflt));
	if (array[pos] > search)
		return (recursive_interpolation(array,
						Low, pos - 1, search, dflt));

	return (-1);
}


/**
 *interpolation_search - interpolation algorithm formulation
 *@array: search array
 *@size: the size of the array
 *@value: value in search
 *Return: index of found value else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high, low, pos;

	if (!array)
		return (-1);

	high = (int)(size - 1);
	low = 0;

	if (value > array[high])
	{
		pos = low + (((double)(high - low) /
			      (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%d] is out of range\n", pos);
		return (-1);
	}

	return (recursive_interpolation(array, low, high, value, (int)size));
}
