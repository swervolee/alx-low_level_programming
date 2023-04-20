#include "function_pointers.h"

/**
 *array _iterator - iterates over an array
 *@array: the array
 *@size: the size of the array
 *@action: the pointer function to execute
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
