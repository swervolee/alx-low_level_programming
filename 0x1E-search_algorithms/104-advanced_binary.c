#include "search_algos.h"
#include <stdbool.h>
/**
 *Recursive_binary - recursive binary search
 *@array: search array
 *@left: lower limit
 *@right: upper limit
 *@value: value in search
 *@dflt: default array length
 *Return: value found index else -1
 */

int Recursive_binary(int *array, int left, int right, int value, int dflt)
{
	int mid, i, flag;

	i = left, mid = (left + right) / 2, flag = 1;

	if (left > right || right >= dflt)
		return (-1);
	while (true)

	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (Recursive_binary(array, left, mid - 1, value, dflt));
	if (array[mid]   < value)
		return (Recursive_binary(array, mid + 1, right, value, dflt));
	return (-1);
}


/**
 *advanced_binary - formulates the binary search algorithm
 *@array: search array
 *@size: size of array
 *@value: the value in search
 *Return: found value index else -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (Recursive_binary(array, 0, (int)size - 1, value, (int)size));
}
